#include "main.h"
#include <unistd.h>

/**
 * clear - Clears the STDIO
 *
 * Return: Always void
 */

void clear(void)
{
	char ANSI_C[] = "\033[H\033[J";
	char *stroke_c;
	stroke_c = ANSI_C;

	_puts(stroke_c);	
	
}
