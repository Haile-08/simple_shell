#include "main.h"

/**
 * main - Entry point
 * Description: the shell entry point
 * @ac: number of arguments
 * @av: array of the arguments
 *
 * Return: 0 on success
 */

int main(__attribute__((unused))int ac, char *av[])
{
	char *line;
	char **args;
	int status = 1;
	char ch[9] = "#cisfun$ ";

	while (status)
	{
		int i = 0;
		while (ch[i] != '\0')
		{
			_putchar(ch[i]);
			i++;
		}
		line = shell_read_line(av[0]);
		args = shell_parser(line, av[0]);
		if (args[0] != NULL)
			status = shell_execute(args, av[0]);
		free(line);
		free(args);
	}
	return (0);
}
