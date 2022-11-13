#include "main.c"

/**
 * _strlen - string length
 * Description: return the length of a string
 * @s: string pointer value
 *
 * Return: string_length
 */

int _strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
