#ifndef PROCESSES_H
#define PROCESSES_H

struct Process
{
  int ID;
  char name[30];
};
extern struct Process processes[5];
extern int processescount;
int createnewprocess(char name[]);
void stopprocess(int id);
#endif
