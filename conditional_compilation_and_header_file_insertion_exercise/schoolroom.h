#ifndef SCHOOLROOM_H
#define SCHOOLROOM_H
#include "person.h"
struct SchoolRoom
{
  int numofroom;
  struct Person people[50];
};
#endif