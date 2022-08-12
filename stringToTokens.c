#include "main.h"

/**
* *nbr_spaces - returns the number of occurent of string
* @s: string to check
* Return: Always 0
*/

unsigned int nbr_spaces(char *s)
{
int i, cmpt = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == ' ')
cmpt++
}
return (cmpt);
}

/**
* StringToTokens - split sentence to multiple words
* @str: string passed as argument.
*
* Return: tokens
*/
char **StringToTokens(char *str)
{
int i = 0;
const char separator[] = " ";
int spaces = nbr_spaces(str);
char **tokens = malloc(sizeof(char *) * (spaces + 1));
char *tokens;
  
if (!tokens)
{
fprintf(stderr, "sh: allocation error\n");
exit(1);
}
token = strtok(str, separator);

while (token != NULL)
{
tokens[i] = token;
token = strtok(NULL, separator);
i++;
}
tokens[i] = NULL;
  
return (tokens);
}
