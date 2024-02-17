#include <stdio.h>

void swap(void *pa, void *pb)
{
  int temp = *(int *)pa;
  *(int *)pa = *(int *)pb;
  *(int *)pb = temp;
}

int main()
{
  int a = 10, b = 15;
  void *pa = &a, *pb = &b;
  swap(pa, pb);
  printf("A:%d B:%d", a, b);
}