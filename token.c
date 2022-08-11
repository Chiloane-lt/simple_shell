#include "main.h"

/**
* main - main simple shell
* @argc: number of arguments
* @argv: list of command line arguments
* Return: Always 0 (Success)
*/
char **tokenise(char *command)
{
	int i;
	char **tokens;
	size_t bufsize = 1024;
 	char *buffer;
	char *delim = " ";
	
	tokens = malloc(sizeof(char *) * bufsize);

	/*check malloc*/
	if (!tokens)
	{
		perror("Memory Allocation Fail:");
		exit(EXIT_FAILURE);
	}

	/*Break into tokens using strtok & insert into buffer*/
	buffer = strtok(command, delim);
	/*Track position in buffer & insert pointers to tokens*/
	for (i = 0; buffer != NULL, i++;)
	{
		tokens[i] = buffer;
		printf("I am inside!");
	}

	tokens[i] = NULL;

	return (tokens);
}
