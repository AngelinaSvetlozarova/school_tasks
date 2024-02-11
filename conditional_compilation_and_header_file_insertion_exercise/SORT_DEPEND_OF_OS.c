#include <stdio.h>

int main(void)
{
  int arr[10]={0,45,-9,34,43,1,9,6,65,56};
  #ifdef _WIN32
    for(int i=0;i<10-1;i++)
    {
      int YES=0;
      for(int j=0;j<10-1-i;j++)
      {
        if(arr[j]>arr[j+1])
        {
          int c;
          c=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=c;
          YES=1;
        }
      }
      if(YES==0)break;
    }
  #elif defined __LINUX__
    for(int i=0;i<10-1;i++)
    {
      int min=arr[i];
      int c=i;
      for(int j=i;j<10-1;j++)
      {
        if(min>arr[j+1])
        {
          min=arr[j+1];
          c=j+1;
        }
      }
      arr[c]=arr[i];
      arr[i]=min;
    }
  #elif defined __APPLE__
    for(int i=1;i<10;i++)
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
  #else
    int b=10-1;
    for(int i=0;i<10/2;i++)
    {
      int c=arr[i];
      arr[i]=arr[b];
      arr[b]=c;
      b--;
    }
  #endif
  for(int i=0;i<10;i=i+1)
  {
    printf(" %d",arr[i]);
  }
}