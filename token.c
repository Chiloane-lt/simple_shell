#include "main.h"

/**
* main - main simple shell
* @argc: number of arguments
* @argv: list of command line arguments
* Return: Always 0 (Success)
*/
int main(int argc, char **argv)
{
  int response;
  char **tokens;
  size_t bufsize = 1024;
  int isPipe = 0;
  char *buffer;
  
  if (argc >= 2)
  {
    /*Handle only commands, where there is no arguments*/
    if (execve(argv[1], argv, NULL) == -1)
    {
      perror("Error");
      exit(-1);
    }
    return (0);
  }
  
  buffer = (char *)malloc(bufsize * sizeof(char));
  if (buffer == NULL)
  {
    perror("unable to allocate buffer");
    exit(1);
  }
  do
  {
    if (isatty(fileno(stdin)))
    {
      isPipe = 1;
      _puts("cisfun#: ");
    }
    
    getline(&buffer, &bufsize, stdin);
    buffer[_strlen(buffer) - 1] = '\0';
    tokens = stringtotokens(buffer);
    response = execute(tokens);
  }
  while (isPipe && response != -1);
  return (0);
  
