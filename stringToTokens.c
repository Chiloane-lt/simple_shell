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
/**Buffer created will be (soaces + 1) in size
 * e.g.  the string was : "This is some random string" the buffer
 * created will be 4 bytes insize. That's enough only to accommodate the
 * first word. Not the rest of the string which will cause a segmentation
 * fault*/

char *tokens;
  
if (!tokens)
{
fprintf(stderr, "sh: allocation error\n");
/**The fprintf function is not allowed. alternatuvely
 * you can put the string into a pointer and use puts or _putchar*/

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
