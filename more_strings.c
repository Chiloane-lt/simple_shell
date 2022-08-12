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
