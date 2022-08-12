#include "main.h"
#include <stdio.h>
#include <stdlib.h>

extern char **environ;
 
int _strncmp(char *s1, char *s2, size_t n)
{
	int i = 0;

	if (!s1 | !s2)
	{
		return (-1);
	}

	while (i < (n + 1) )
	{
		if (s1[i] != s2[i])
		{
			return (0);
		}
		else if (s1[i] == s2[i])
		{
			i++;
		}
	}

	return (1);
}

char *find_p(void)
{
	    char **environment = environ;
	    char pathSTR[] = "PATH=";
	    char *s2 = pathSTR;
	    int c, i = 0;

	    while (*environment != NULL)
	    {
		    c = strncmp(*environment, s2, 5);
		    
		    if (c == 1)
		    {
			    _puts(*environment);
			    _putchar('\n');
			    _puts(s2);
			    _putchar('\n');

			    printf("They are ARE the same!");
			    return (*environment);
		    }

		    s2++;
		    *environment++;
	    }

	    return (0);
}

int main()
{

	find_p();

	return (0);

}
