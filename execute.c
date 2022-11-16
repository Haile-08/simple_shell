#include "main.h"

/**
 * execute - execute
 * @tok: the token to execute
 * @av: the name of the file
 *
 * Description: execute a prompt
 *
 * Return: none
 */
extern char **environ;

void execute(char *tok, char *av)
{
	pid_t cpid;
	char *newargv[] = {"", NULL};

	newargv[0] = tok;
	cpid = fork();
	if (cpid == 0)
	{
		if ((execve(tok, newargv, environ)) == -1)
		{
			perror(av);
		}
	}
	else if (cpid == -1)
	{
		exit(99);
	}
	else
	{
		wait(NULL);
	}
}
