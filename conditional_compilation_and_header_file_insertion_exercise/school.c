#include <stdio.h>
#include "schoolclass.h"
#include "schoolroom.h"
struct School
{
  struct SchoolClass schoolclasses[20];
  struct SchoolRoom schoolrooms[10];
};

int main(void)
{
  struct School myschool;
}