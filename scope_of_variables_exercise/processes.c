#include <stdio.h>
#include "processes.h"
#include <limits.h>
#include <string.h>

struct Process processes[5];
int processescount=0;

static int nextprocessid()
{
  static int num_id=0;
  num_id++;
  if(num_id>=1&&num_id<=INT_MAX) return num_id;
  else return 0;
}

int createnewprocess(char name[])
{
  struct Process process;
  strcpy(process.name, name);
  process.ID=nextprocessid();
  if(process.ID==0)
  {
    printf("The range of unique numbers is exhausted.");
    return 0;
  }

  if(processescount<=5)
  {
    processes[processescount]=process;
    processescount++;
    return process.ID;
  }
  else return 0;
}

void stopprocess(int id)
{
  int i=0;
  while(i<processescount)
  {
    if(processes[i].ID == id)
    {
      for(int j=i; j<processescount-1;j++)
      {
        processes[j]=processes[j+1];
      }
      processescount--;
    }
    else i++;
  }
}