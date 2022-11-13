#include "main.h"

/**
 * shell_read_line - read line
 * Description: read line form the promt
 * @av: name of the file
 *
 * Return: the line input
 */

char *shell_read_line(char *av)
{
	char *line = NULL;
	size_t bufferlength = 0;

	if (getline(&line, &bufferlength, stdin) == -1)
	{
		perror(av);
		exit(99);
	}
	return (line);
}
