#include "main.h"
#include <sys/types.h>
#include <unistd.h>

/**
 * spawner- Creates a child process of current process
 * Return:
 */


pid_t spawner(const char *commands, char **parameters)
{
	int child, status;
	pid_t c_pid, p_pid; 
	
	/*fork funxn return ID of child or 0 or -1 on failure*/
	c_pid = fork();

	/*Will fail to execute since it will be in parent process*/
	if (c_pid == 0)
	{
		child = execv("path/to/cmd", parameters);
		if (child == -1)
		{
			perror("spawner");
		}
		exit(EXIT_FAILURE);
	}else if (c_pid == -1) /*Failed to fork*/
	{
		perror("Spawner");
		exit(EXIT_FAILURE); /*remove?*/
	}
	else /*Succesfully forked & will execute*/
	{
		status = 0;
		
		p_pid = waitpid(c_pid, &staus, WUNTRACED);
	}
	return (1); /*edit later*/
}
