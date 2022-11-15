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
		char *prompt = "#cisfun$ ";

		write(1, prompt, 9);
		line = get_line();
		fflush(stdin);
		tok = tokenize(line);
		if (tok != NULL)
			execute(tok, av[0]);
		free(tok);
	}
	return (0);
}
