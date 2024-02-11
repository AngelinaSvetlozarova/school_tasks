#include <stdio.h>
#define RESULT(A,B) (A+B)*(A+B)

int main()
{
  int A=5, B=7;
  int res=RESULT(A,B);
  printf("%d",res);
}