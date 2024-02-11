#include <stdio.h>
#include <string.h>
#include "processes.h"

int main()
{
  int op, YES=0;
  do
  {
    printf("\nChoose option:\n1.Make a process\n2.Print all processes\n3.Stop a process\n4.Exit");
    printf("\nOption:");
    scanf("%d", &op);
    switch(op)
    {
      case 1:
      char name[30];
      printf("Name of process:");
      scanf("%s", &name);
      if(processescount==5) printf("\nThe maximum number of working processes has been reached, and in order to create a new process, one of the workers must be stopped.");
      else createnewprocess(name);
      break;
      case 2:
      for(int i=0; i<processescount;i++)
      {
        printf("\nProcess %d - %s", processes[i].ID, processes[i].name);
      }
      break;
      case 3:
      int id;
      printf("Number of ID:");
      scanf("%d", &id);
      stopprocess(id);
      break;
      case 4:
      return 0;
    }
  } 
  while(YES==0);
}