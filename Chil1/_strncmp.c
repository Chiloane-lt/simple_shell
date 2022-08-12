#include <stdio.h>
#include <stdlib.h>

/*extern char **environ;*/
 
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

int main()
{
	char *s1 = "Bobbi";
	char *s2 = NULL;
	int res;

	res = _strncmp(s1, s2, 5);

	printf("test came out: %d", res);
	printf("\n");

	return (0);
}


/*int printPATH(void)
{
	    const char **environment = environ;
	
	    while (*environment != NULL)
	    {
		    if (ifff)
	    }

	    return (0);
}*/


