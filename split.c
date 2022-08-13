#include "main.h"

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
