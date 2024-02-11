#ifndef SCHOOLCLASS_H
#define SCHOOLCLASS_H
#include "person.h"
struct SchoolClass
{
  struct Person group[26];
  char nameofclass;
  int numofclass;
  struct Person teacher;
};
#endif