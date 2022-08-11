#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <strings.h>
#include <stdlib.h>

/*Functions to handel strings*/
void _puts(char *str);
int _strcmp(const char *s1, const char *s2);
char *_strcpy(char *dest, const char *src);
int _putchar(char c);
int _strlen(const char *s);

/*Memory Mangament functions*/
char *_memset(char *s, char b, unsigned int n);
void *_calloc(unsigned int nmemb, int size);

int execute(char **cmd);
char *read_cmd(void);
#endif
