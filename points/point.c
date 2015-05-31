#include <stdio.h>
#include <math.h>
#include "point.h"

float square(float num) {
  return num * num;
}

struct Point readPoint(int num){
  struct Point newPoint;
  printf("\n\nEnter x-coordinate of point %d: ", num);
  scanf("%f", &(newPoint.x));
  printf("Enter y-coordinate of point %d: ", num);
  scanf("%f", &(newPoint.y));
  printf("Enter z-coordinate of point %d: ", num);
  scanf("%f", &(newPoint.z));

  return newPoint;
}

float distance(struct Point pointA, struct Point pointB) {
  float xDistance, yDistance, zDistance;
  float result;

  xDistance = square(pointB.x - pointA.x);
  yDistance = square(pointB.y - pointA.y);
  zDistance = square(pointB.z - pointA.z);

  result = sqrt(xDistance + yDistance + zDistance);

  return result;
}

float areaTriangle(float edgeA, float edgeB, float edgeC){
  float s;
  float f;

  s = (edgeA + edgeB + edgeC) / 2;
  f = sqrt(s * (s - edgeA) * (s - edgeB) * (s - edgeC));
  return f;

}
