#include "main.h"

/**
* execute - executes the command
* @cmd: command to run
* Return: 0 on success
*/
int execute(char **cmd)
{
  pid_t child_pid;
  int status;
  
  if (strncmp("exit", cmd[0], 4) == 0)
    return (-1);
  
  child_pid = fork();
  
  if (child_pid == -1)
  {
    perror("Error");
    return (1);
  }
  else if (child_pid == 0)
  {
    if (execve(cmd[0], cmd, NULL) == -1)
    {
      perror("Error");
      exit(-1);
    }
  }
  else
    wait(&status);
  return (0);
}
