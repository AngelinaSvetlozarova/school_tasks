#include <stdio.h>

typedef struct node
{
  char firstname[20];
  struct Node *father;
  struct Node *mother;
  struct Node *marriedto;
}Node;

int main()
{
  Node GreatGrandmother1 = {"Dinka", NULL, NULL, NULL};
  Node GreatGrandfather1 = {"Dobri", NULL, NULL, &GreatGrandmother1};
  Node GreatGrandmother2 = {"Ganka", NULL, NULL, NULL};
  Node GreatGrandfather2 = {"Nedql", NULL, NULL, &GreatGrandmother2};
  Node GreatGrandmother3 = {"Iordanka", NULL, NULL, NULL};
  Node GreatGrandfather3 = {"Radion", NULL, NULL, &GreatGrandmother3};
  Node GreatGrandmother4 = {"Dora", NULL, NULL, NULL};
  Node GreatGrandfather4 = {"Dimo", NULL, NULL, &GreatGrandmother4};
  Node GrandMother1 = {"Zlatka", &GreatGrandfather1, &GreatGrandmother1, NULL};
  Node GrandFather1 = {"Penio", &GreatGrandfather2, &GreatGrandmother2, &GrandMother1};
  Node GrandMother2 = {"Iva", &GreatGrandfather3, &GreatGrandmother3, NULL};
  Node GrandFather2 = {"Svetlozar", &GreatGrandfather4, &GreatGrandmother4, &GrandMother2};
  Node Mother = {"Gabriela", &GrandFather1, &GrandMother1, NULL};
  Node Father = {"Ioan", &GrandFather2, &GrandMother2, &Mother};
  Node I = {"Angelina", &Father, &Mother, NULL};

  GreatGrandmother1.marriedto = &GreatGrandfather1;
  GreatGrandmother2.marriedto = &GreatGrandfather2;
  GreatGrandmother3.marriedto = &GreatGrandfather3;
  GreatGrandmother4.marriedto = &GreatGrandfather4;
  GrandMother1.marriedto = &GrandFather1;
  GrandMother2.marriedto = &GrandFather2;
  Mother.marriedto = &Father;
} 