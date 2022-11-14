#include "main.h"

/**
 * shell_parser - parser
 * Description: split the line into arrays
 * @line: the input line
 *
 * Return: pointer to the array
 */

char **shell_parser(char *line, __attribute__((unused))char *av)
{
	int i = 0,size = 20;
	char **tokens;
	char *dilm = " \t\r\n";
	char *tok;

	tokens = malloc(size * sizeof(char *));
	if (tokens == NULL)
	{
		exit(99);
	}
	tok = strtok(line, dilm);
	while (tok != NULL)
	{
		tokens[i] = tok;
		i++;
		if (i >= size)
		{
			size += size;
			tokens = realloc(tokens, size * sizeof(char *));
			if (tokens == NULL)
			{
				exit(99);
			}
		}
		tok = strtok(NULL, dilm);
	}
	tokens[i] = NULL;
	return (tokens);
}	
