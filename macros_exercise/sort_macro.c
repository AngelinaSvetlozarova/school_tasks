#include <stdio.h>
#include "swap_a_b.h" //This is the previous program i made
#define SORT(ARRAY,SIZE,TYPE,COMPARE) \
for(int i=0;i<SIZE-1;i++) \
{ \
  int YES=0; \
  for(int j=0;j<SIZE-1-i;j++) \
  { \
    if(ARRAY[j] COMPARE ARRAY[j+1]) \
    { \
      SWAP(ARRAY[j],ARRAY[j+1],TYPE); \
      YES=1; \
    } \
  } \
  if(YES==0)break; \
} \


int main ()
{
  int arr[10]={9,0,234,-5,45,54,90,8,32,23};
  SORT(arr,10,int,<);
  for(int i=0; i<10; i++)
  {
    printf(" %d",arr[i]);
  }
}