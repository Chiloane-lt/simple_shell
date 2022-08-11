#ifndef MAIN_H
#define MAIN_H

/*Insert prototypes here*/
void _puts(char *str);
int _strcmp(const char *s1, const char *s2);
char *_memset(char *s, char b, unsigned int n);
void *_calloc(unsigned int nmemb, int size);
int main(int argc, char **argv);
int execute(char **cmd);
int _putchar(char c);
int _strlen(const char *s);
char *read_cmd(void);
#endif
