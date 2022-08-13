#include "main.h"

/**
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
