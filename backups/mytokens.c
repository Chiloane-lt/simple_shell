#include "main.h"

char **_strtok(char *command)
{
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
		
	token = strtok(command, delim);

	while (token != NULL)
	{
		printf("Token: %s\n", token);
		token = strtok(NULL, delim);
		tokens[i] = token;

		printf("This is stored index of token: %p\n", tokens);

		i++;
	}

	tokens[i] = NULL;
	return (tokens);
}

int main()
{
	char cmd[] = "This is totally stupid!";
	char *command = cmd;
	
	_strtok(command);
	return (0);
}
