#include <stdio.h>
#include "point.h"

int main(void) {
  struct Point pointA;
  struct Point pointB;
  struct Point pointC;
  float distanceAtoB;
  float distanceBtoC;
  float distanceCtoA;
  float area;
  
  printf("Calculating a distance\n");

  pointA = readPoint(1);
  pointB = readPoint(2);
  pointC = readPoint(3);
  distanceAtoB = distance(pointA, pointB);

  printf("The distance of point 1 and point 2 is: %f\n\n\n", distanceAtoB);

  printf("Calculating a triangle\n");

  distanceBtoC = distance(pointB, pointC);
  distanceCtoA = distance(pointA, pointB);

  area = areaTriangle(distanceAtoB, distanceBtoC, distanceCtoA);

  printf("The area of triangle 123 is: %f\n", area);

  return 0;
}