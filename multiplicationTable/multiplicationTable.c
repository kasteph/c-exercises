/// -- Multiplication Table --
// by Mahdi Hachem, Klei Hasanay, Stephanie Dawn Samson
// A program that prints out a multiplication table to the console
// given a number of rows and columns.
// It uses the for loop and while loop to print out the table.
 
#include <stdio.h>
 
int forLoopTablePrint(desiredRows, desiredColumns){
  int currentRow;
  int currentColumn;
  for (currentRow = 1; currentRow <= desiredRows; currentRow += 1){
    for (currentColumn = 1; currentColumn <= desiredColumns; currentColumn += 1){
      printf("%d\t", currentRow * currentColumn);
    }
    printf("\n");
  }
  return 0;
}
 
int whileLoopTablePrint(desiredRows, desiredColumns){
  int currentRows = 1;
  while (currentRows <= desiredRows){
    int currentColumn = 1;
    while (currentColumn <= desiredColumns) {
      printf("%d\t", currentColumn * currentRows);
      currentColumn += 1;
    }
    currentRows += 1;
    printf("\n");
  }
  return 0;
}
 
int main(void){
  int desiredRows;
  int desiredColumns;
 
  printf("\nEnter the number of rows: ");
  scanf("%d", &desiredRows);
  
  printf("\nEnter the number of columns: ");
  scanf("%d", &desiredColumns);
 
  printf("\n\n- - - - Printing Table with For Loop - - - -\n");
  forLoopTablePrint(desiredRows, desiredColumns);
 
  printf("\n\n- - - - Printing Table with While Loop - - - -\n");
  whileLoopTablePrint(desiredRows, desiredColumns);
 
  return 0;
}