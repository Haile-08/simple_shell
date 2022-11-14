#ifndef _MAIN_HEADER_
#define _MAIN_HEADER_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/wait.h>

char *shell_read_line(char *av);
char **shell_parser(char *line, char *av);
int shell_execute(char **args, char *av);

/* custome function */

int _putchar(char c);
char *_strncat(char *dest, char *src, int n);
int _strlen(char *s);

#endif
