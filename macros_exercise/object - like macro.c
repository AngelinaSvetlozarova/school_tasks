#include <stdio.h>
#define OBJECT_LIKE \
int array[5]={1,2,3,4,5}; \
for(int i=0;i<5;i++) \
{ \
  printf(" %d",array[i]); \
} \

int main()
{
  OBJECT_LIKE;
  return 0;
}