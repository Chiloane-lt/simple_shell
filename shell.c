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

	/*use exit codes to clear screen*/
	clear();

	printf("WELCOME PANCAKES");

	/*print welcome message, incl. shell name*/	
	
	do {
		/*print prompt*/
		pointer();

		/*read input command*/
		command = reader();

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
