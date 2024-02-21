#include <stdio.h>

void swap(void *pa, void *pb)
{
  int temp = *(int *)pa;
  *(int *)pa = *(int *)pb;
  *(int *)pb = temp;
}

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

void bubblesort(int array[], int len_array, int (*compare)(const void *const, const void *const), void (*swapelements)(void *, void *))
{
  for(int i=0; i < len_array - 1; i++)
  {
    for(int j=0; j < len_array - 1 - i; j++)
    {
      if((*compare)(&(array[j]), &(array[j+1])) == 1)
      {
          (*swapelements)(&(array[j]), &(array[j+1]));
      }
    }
  }

}

int main()
{
  int array[10] = {19, 0, 34, 12, 4, 6, 2, 13, 29, 100};
  int (*compare)(const void *const, const void *const) = 0;
  compare = &compareasc;
  void (*swapelements)(void *, void *) = 0;
  swapelements = &swap;
  bubblesort(array, 10, compare, swapelements);
  printf("Compareasc:");
  for(int i=0; i<10; i++)
  {
    printf(" %d", array[i]);
  }
  printf("\n");
  printf("Comparedesc:");
  compare = &comparedesc;
  bubblesort(array, 10, compare, swapelements);
  for(int i=0; i<10; i++)
  {
    printf(" %d", array[i]);
  }
}
