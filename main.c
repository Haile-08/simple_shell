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
		line = shell_read_line(av);
		args = shell_parser(line, av);
		if (args != NULL)
			status = shell_execute(line, av);
		free(line);
		free(args);
	}
}
