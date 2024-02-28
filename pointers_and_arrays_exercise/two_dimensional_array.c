#include <stdio.h>
#define rows 3
#define col 4

void print(int array[][col], int row)
{
  for(int i = 0; i < row; i++)
  {
    for(int j = 0; j < col; j++)
    {
      printf(" %-5d", *(*(array + i)+j));
    }
    printf("\n");
  }
}

int main()
{
  int array[rows][col] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  int row = rows;
  print(array, row);
  return 0;
}