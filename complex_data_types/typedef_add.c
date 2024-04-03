#include <stdio.h>
typedef unsigned long long ull;
typedef ull (*ullfuncptr)(ull, ull);

ull reduce(ull arr[], ull len, ullfuncptr ptr, ull result)
{
  for (int i=0; i<len; i++)
  {
    result = ptr(result, arr[i]);
  }
  return result;
}
ull add(ull arg1, ull arg2)
{
  ull SUM = arg1 + arg2;
  return SUM; 
}

int main()
{
  ull arr[5] = {1, 2, 3, 4, 5};
  ullfuncptr ptr = &add;
  ull result = reduce(arr, 5, ptr, 0);
  printf("Result:%llu", result);
}