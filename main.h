#ifndef MAIN_H
#define MAIN_H

/*Insert prototypes here*/
void _puts(char *str);
char *_memset(char *s, char b, unsigned int n);
void *_calloc(unsigned int nmemb, int size);
int main(int argc, char **argv);
int execute(char **cmd);
int _putchar(char c);
int _strlen(char *s);
int exit_check(char *s);
char *read_cmd(void);
#endif
