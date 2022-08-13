#include "main.h"
#include <sys/types.h>
#include <sys/wait.h>

/**
* execute - executes the command
* @cmd: command to run
* Return: 0 on success
*/
int execute(char **cmd)
{
	const char *PATH[] = {"/bin", "/usr/bin", "/usr/local/bin"};
	pid_t child_pid;
	int status;

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
		}

		exit(EXIT_FAILURE);
	}
	else
	{
		do {
			waitpid(child_pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && (!WIFSIGNALED(status)));
	}

	return (0);
}
