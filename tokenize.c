#include "main.h"

/**
 * tokenize - tokenize the line
 * @tok: input line
 *
 * Description: tokenize the line
 * Return: value of the token
 */

char *tokenize(char *line)
{
	char *dilm = " \t\r\n\a";
	return (strtok(line, dilm));
}
