#include <stdio.h>
#include <math.h>

int main(void)
{
  long array[5]={1, 2, 3, 4, 5};
  for(int i=0;i<5;i++)
  {
    array[i]=pow(array[i], 4);
  }
  for(int i=0;i<5;i++)
  {
    printf(" %ld",array[i]);
  }
}