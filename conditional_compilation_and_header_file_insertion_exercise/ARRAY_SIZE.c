#include <stdio.h>
#define ARRAY_SIZE 10

int main(void)
{
  #ifdef ARRAY_SIZE
  if(ARRAY_SIZE<11&&ARRAY_SIZE>0)
  {
    int array[ARRAY_SIZE];
    int i=0;
    array[i]=1;
    for(int i=1;i<ARRAY_SIZE;i++)
    {
      array[i]=array[i-1]*2;
    }
    for(i=0;i<ARRAY_SIZE;i++)
    {
      printf("%d\n",array[i]);
    }
  }
  else printf("The size of array is not allowed.");
  #endif
  #ifndef ARRAY_SIZE
  printf("There isn't any size of array.");
  #endif
}