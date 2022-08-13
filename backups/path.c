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
 
char *find_p(void)
{
	    int c;
	    
	    char **environment = environ;
	    char pathSTR[] = "PATH=";
	    char *s2 = pathSTR;

	    char delim[] = ":";
	    char *path;
	    char **path_t = malloc(sizeof(char *) * 1024);

	    while (*environment != NULL)
	    {
		    c = _strncmp(*environment, s2, 5);
		    
		    if (c == 0)
		    {
			    /*put into pointer called path*/
			    /*tokenise path into double pointer called path_t*/

			    return (*path);
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
