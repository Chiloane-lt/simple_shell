#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program entry point.
 * @argc: number of arguments passed to main
 * @argv: pointer to arguments string
 *
 *Return: interger exit value
 * Description - simple shell that prints a prompt,
 * reads user input commands and processes them.
 */

int main(int argc, char *argv[])
{
	char *command;
	char **cmd;
	char *str = "exit\n";

	do {
		/*print prompt*/
		pointer();

		/*read input command*/
		command = read_cmd();

		/*check if no input*/
		if (!command)
		{
			exit(EXIT_SUCCESS);
		}

		/*close shell if input command is "exit"*/
		if (_strcmp(command, str) == 1)
		{
			free(command);
			break;
		}

		cmd = tokenise(command);

		free(command);

	} while (1);

	exit(EXIT_SUCCESS);
}
