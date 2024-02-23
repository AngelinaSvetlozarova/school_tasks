#include <stdio.h>

void swap(int *pa, int *pb)
{
  int temp = *pa;
  *pa = *pb;
  *pb = temp;
}

void bubblesort(int *p, int len)
{
   for(int i=0; i < len - 1; i++)
  {
    for(int j=0; j < len - 1 - i; j++)
    {
      if(*(p+j) > *(p+j+1))
      {
        swap(p+j, p+j+1);
      }
    }
  }
}

int main()
{
  int array[10] = {1, 2, 9, 4, 28, 45, 32, 12, 21, 0};
  int *p = array;
  bubblesort(p, 10);
  for(int i=0; i < 10; i++)
  {
    printf(" %d", *(p+i));
  }
}