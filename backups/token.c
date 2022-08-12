#include "main.h"

/**
 * tokenise - Parses a string into tokens given string pointer
 * @command: Comandline input to parse
 * Return: double character pointer to buffer
 */
char **tokenise(char *command)
{
	/**ERROR: Segmentation Fault*/
	/* Cause: fails given pointer. Only works*/
	/* given a literal string and a pointer to that*/
	/*Solution: Make read function output string proper*/

	/*To store tokens in **tokens*/
	size_t bufsize = 1024;
	char **tokens = malloc(sizeof(char *) * bufsize);
	int i;

	char *token;

	/*test malloc**/
	if (!tokens)
	{
		printf("Didn't allocate memory");
	}


	char delim[] = " ";

	tokien = strtok(command, delim);

	while (token != NULL)
	{
		token = strtok(NULL, delim);
		tokens[i] = token;

		i++;
	}
	tokens[i] = NULL;

	return (tokens);
}
