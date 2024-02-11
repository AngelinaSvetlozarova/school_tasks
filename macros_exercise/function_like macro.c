#include <stdio.h>
#define FUNCTION_LIKE(a,b) \
int max; \
max=(a>b)?(a):(b); \
printf("The bigger is %d.",max); \

int main()
{
  int a = 5,b = 9;
  FUNCTION_LIKE(a,b);
  return 0;
}