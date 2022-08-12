#include "main.h"

/**
 * clear - Clears the STDIO
 *
 * Return: Always void
 */

void clear(void)
{
	const char *stroke_c[] = "\033[H\033[J";
	write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
	
}

