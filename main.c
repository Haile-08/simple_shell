#include "main.h"

/**
 * main - Entry point
 * @ac: the number of args
 * @av: array of args
 *
 * Return: 0 on success
 */

int main(__attribute__((unused))int ac, char *av[])
{
	while (1)
	{
		char *line;
		char *tok;

		line = get_line();
		tok = tokenize(line);
		if (tok != NULL)
			execute(tok);
		free(line);
		free(tok);
	}
	return (0);
}
