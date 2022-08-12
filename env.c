#include "main.h"
#include <unistd.h>

/**
 * env - Prints the environemnt variables of the current process
 * 
 * Return: None. Always void
 *
 * Description: the double pointer environ is defined in the stdio.h
 * library but can be used in any file.
 */

extern char **environ;

void env(void)
{
	char **environment = environ;

	while (*environment != NULL)
	{
		_puts(*environment);
		*environment++;
		_putchar('\n');
	}

}
