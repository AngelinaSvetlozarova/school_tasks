#include <stdio.h>

union Even_Odd
{
  long odd;
  short even;
};

int main()
{
  union Even_Odd array[10];
  for(int i = 0; i<10; i++)
  {
    if(i%2 == 0) array[i].even = i;
    else array[i].odd = i;
  }
  for(int i = 1; i<10; i=i+2)
  {
    printf("% ld", array[i].odd);
  }
  printf("\n");
  for(int i = 0; i<10; i=i+2)
  {
    printf("% hd", array[i].even);
  }
}