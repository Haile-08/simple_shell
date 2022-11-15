#include "main.h"

/**
 * get_line - get the line
 * Description: get the prompt line
 *
 * Return: the line
 */

char *get_line(void)
{
	char *line = NULL;
	size_t len = 23;

	while ((getline(&line, &len, stdin)) == -1)
	{
		exit(99);
	}
	return (line);
}
