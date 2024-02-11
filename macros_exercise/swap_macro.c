#include <stdio.h>
#define SWAP(A,B,TYPE) \
TYPE C; \
C=A; \
A=B; \
B=C; \

int main()
{
  char A = 'A',B = 'B';
  SWAP(A,B,char);
  printf("A=%c\nB=%c",A,B);
  return 0;
}
