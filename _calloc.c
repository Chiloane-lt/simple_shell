#include "main.h"
/**
* _memset - fills memory with a constant byte
* @s: address begin to fill
* @b: value set on memmory
* @n: numbers of bytes
* Return: char
*/
char *_memset(char *s, char b, unsigned int n)
{
  unsigned int i = 0;
  while (i < n)
  {
    *(s + i) = b;
    i++;
  }
  return (s);
}

/**
* _calloc - allocatesmemory for array using malloc
* @nmemb: amount of values to store on memory
* @size: number of bytes of datatype
*
* Return: void
*/
void *_calloc(unsigned int nmemb, int size)
{
  void *p = NULL;
  
  if (nmemb == 0 || size == 0)
    return (NULL);
  p = malloc(nmemb * size);
  
  if (p == NULL)
    return (NULL);
  
  _memset(p, 0, size * nmemb);
  return (p);
}
