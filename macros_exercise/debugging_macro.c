#include <stdio.h>
#define DEBUGGING(n) \
printf(#n"=%d\n",n); \
printf("File: %s\n", __FILE__); \
printf("Line: %d\n", __LINE__); 

int main()
{
  int n=6;
  DEBUGGING(n);
}


