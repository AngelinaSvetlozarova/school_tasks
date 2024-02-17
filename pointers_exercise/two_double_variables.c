#include <stdio.h>

int main()
{
  double a = 10, b = 15;
  double *pa = &a, *pb = &b;
  printf("A: adress:%p value:%lf", pa, *pa);
  printf("\nB: adress:%p value:%lf", pb, *pb);

}