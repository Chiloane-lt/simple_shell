#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * reader - Reads and checks if user input is a linux cmd
 * Return: TBD.
 */

char *reader(void)
{
	char *command = NULL;
	char *newline = "\n";
	size_t size = 0;
	ssize_t res;

	/*take input from stdin*/
	res = getline(&command, &size, stdin);

	if (res == -1)
	{
		exit(EXIT_FAILURE);
	}

	/*check if input is EOF (Ctrl + D) or ENTER*/
	if (feof(stdin) || _strcmp(command, newline) == 1)
	{
		/*restart process i.e. print pointer*/
		exit(EXIT_SUCCESS);
	}
	else if (res == -1)
	{
		exit(EXIT_FAILURE); /*Needs revision*/
	}

	return (command);
}

/**
 * split - Tokenises a string and returns a
 * double pointer to the tokens
 * @command: pointer to take in
 * Return: double pointer to tokens
 */

char **split(char *command)
{
	int i = 0;
	char delim[] = " ";
	char **tokens = malloc(sizeof(char *) * 1024);
	char *token = strtok(command, delim);

	while (token != NULL)
	{
		tokens[i] = token;
		i++;
		token = strtok(NULL, delim);
	}

	tokens[i] = NULL;
	return (tokens);
}
