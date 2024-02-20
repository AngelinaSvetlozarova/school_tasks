#include <stdio.h>

int compareasc(const void *const pa, const void *const pb)
{
  if(*(int *)pa > *(int *)pb) return 1;
  else
  {
    if(*(int *)pa < *(int *)pb) return -1;
    else return 0;
  }
}

int comparedesc(const void *const pa, const void *const pb)
{
  if(*(int *)pa > *(int *)pb) return -1;
  else
  {
    if(*(int *)pa < *(int *)pb) return 1;
    else return 0;
  }
}

int main()
{
  int a = 15, b = 10;
  const void *const pa = &a, *pb = &b;
  int result_asc = compareasc(pa, pb);
  int result_desc = comparedesc(pa, pb);
  printf("compareasc: %d", result_asc);
  printf("\ncomparedesc: %d", result_desc);
}
