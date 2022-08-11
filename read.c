#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * read_cmd - Reads and checks if user input is a linux cmd
 * Return: TBD.
 */

char *read_cmd(void)
{
	char *command = NULL;
	size_t size = 0;
	ssize_t res;

	/*take input from stdin*/
	res = getline(&command, &size, stdin);

	if (res == -1)
	{
		exit(EXIT_FAILURE);
	}

	/*check if input is EOF (Ctrl + D) or ENTER*/
	if (command == EOF || command == '\n')
	{
		/*restart process i.e. print pointer*/
		exit(EXIT_SUCCESS);
	}
	else if (command == -1)
	{
		exit(EXIT_FAILURE); /*Needs revision*/
	}

	return (command);
}
