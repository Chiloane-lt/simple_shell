#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcmp - Compares two strings for a specific number of bytes
 * @s1: Initial string
 * @s2: string to compare to s1
 * @n: Length of characters over which to compare
 *
 * Return: 0 if strings mathc, -1 if s1 is less
 * than s2, & 1 in the opposite case.
 */

extern char **environ;
 
int _strncmp(char *s1, char *s2, size_t n)
{
	int i = 0, l1, l2;

	l1 = _strlen(s1);
	l2 = _strlen(s2);

	if (!s1 | !s2)
	{
		return (-1);
	}

	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			/*size check*/
			if (l1 < l2)
			{
				return (-1);
			}
			else if (l1 > l2)
			{
				return (1);
			}
		}
		else if (s1[i] == s2[i])
		{
			i++;
		}
	}

	return (0);
}

/**
 * find_p - finds the PATH environment variable and
 * stores it in a pointer.
 * 
 * Return: pointer to PATH
 */

char *find_p(void)
{
	    char **environment = environ;
	    char pathSTR[] = "PATH=";
	    char *s2 = pathSTR;
	    int c;

	    while (*environment != NULL)
	    {
		    c = _strncmp(*environment, s2, 5);
		    
		    if (c == 0)
		    {
			    _puts(*environment);
			    _putchar('\n');
			    return (*environment);
		    }

		    *environment++;
	    }

	    return (0);
}

int main()
{

	find_p();

	return (0);

}
