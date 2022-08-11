#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program entry point.
 * Description - simple shell that prints a prompt,
 * reads user input commands and processes them.
 */

int main(int argc, char *argv[])
{
	char *command;
	char *str = "exit\n";

	/*print prompt*/
	PS1();

	/*read input command*/
	command = read_cmd();

	if(!command)
	{
		exit(EXIT_SUCCESS);
	}

	/*close shell if input command is "exit"*/
	if (_strcmp(command, str) == 1)
	{
		free(command);
		break;
	}
}
