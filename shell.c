#include "main.h"
#include <unistd.h>
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
	char *str = "exit\n", *str1 = "env\n";

	clear();

	printf("WELCOME PANCAKES\n");
	do {
		pointer();
		command = reader();

		if (!command)
		{
			exit(EXIT_SUCCESS);
		}

		if (_strcmp(command, str) == 1)
		{
			free(command);
			break;
		}

		if (_strcmp(command, str1) == 1)
		{
			env();
		}

		/*Add clear command*/

		/*tokenise(command);*/
		/*execute here*/

		free(command);

	} while (1);

	exit(EXIT_SUCCESS);
}
