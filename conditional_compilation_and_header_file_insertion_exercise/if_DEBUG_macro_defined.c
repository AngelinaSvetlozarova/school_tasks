#include <stdio.h>
#define DEBUG
void sort(int arr[],int arrlen)
{
  for(int i=1;i<arrlen;i++)
  {
    int unsort=arr[i];
    int k=i;
    while(k>0&&unsort<arr[k-1])
    {
      arr[k]=arr[k-1];
      k--;
    }
    arr[k]=unsort;
  }
}
int SUM_OF_ELEMENTS(int arr[],int arrlen)
{
  int SUM=0;
  for(int i=0;i<arrlen;i=i+3)
  {
    SUM=SUM+arr[i];
  }
  return SUM;
}
void PRINT(int arr[],int arrlen)
{
  for(int i=0;i<arrlen;i++)
  {
    printf(" %d",arr[i]);
  }
  printf("\n");
  for(int i=0;i<arrlen;i=i+3)
  {
    printf(" %d",arr[i]);
  }
  printf("\n");
}

int main(void)
{
  int arr[10]={56,-9,0,23,521,77,34,88,43,10};
  sort(arr,10);
  #ifdef DEBUG
  PRINT(arr,10);
  #endif
  int SUM=SUM_OF_ELEMENTS(arr,10);
  printf("SUM=%d",SUM);
}