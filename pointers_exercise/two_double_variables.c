#include <stdio.h>

int main()
{
  double a, b;
  printf("a=");
  scanf("%lf", &a);
  printf("\nb=");
  scanf("%lf", &b);
  double *pa = &a, *pb = &b;
  printf("A: adress:%p value:%lf", pa, *pa);
  printf("\nB: adress:%p value:%lf", pb, *pb);

}
