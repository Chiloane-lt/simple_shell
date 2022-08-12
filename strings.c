#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The charcter to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set approriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* _strlen - find length of string
* @s: pointer to the string to check
* Return: void
*/

int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
* *_strcpy - copies string to pointer
* @dest: char type string
* @src: char type string
* Description: Copy string pointed by 'src' to 'dest'
* Return: Pointer to 'dest'
*/

char *_strcpy(char *dest, const char *src)
{
	int i = -1;
	{
		i++;
		dest[i] = src[i];
	}
	while (src[i] != '\0')
	return (dest);
}

/**
 * _strcmp - Compares two strings
 * @s1: First given string to compare
 * @s2: String to compare to
 *
 * Return: 1 if strings are the equal
 * Returns -1 if they are different
 * Returns 0 if s1 or s2 is NULL
 */
int _strcmp(const char *s1, const char *s2)
{
	int a, b, i = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return (0);
	}

	a = _strlen(s1);
	b = _strlen(s2);

	if (a != b)
	{
		return (-1);
	}
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (1);
}

/**
* _puts - prints a string
* @str: pointer to the string
* Return: void
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}
