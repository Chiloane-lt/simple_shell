#include "main.h"
#include <unistd.h>

/**
 * pointer - Prints $ prompter to stdout
 * Return: None. Always vid.
 *
 */

void pointer(void)
{
	/*Interactive mode*/
	if (isatty(STDIN_FILENO) == 1)
	{
		char *ptr = "($)";
		_puts(ptr);
	}
	else
	{
		/*non-interactive mode*/
		_putchar('$');
	}
}
