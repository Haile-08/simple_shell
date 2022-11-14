#include "main.h"

/**
 * shell_execute - execute
 * Description: execute a program form the prompt
 * @args: parsed line pointer
 *
 * Return: status
 */

extern char **environ;

int shell_execute(char **args, char *av)
{
	char prompt[20] = "/usr/bin/";
	int status;
	pid_t cpid;

	cpid = fork();
	_strncat(prompt, args[0], _strlen(args[0]));
	if (cpid == 0)
	{
		if (execve(prompt, args, environ) == -1)
		{
			perror(av);
			exit(99);
		}
	}
	else if (cpid == -1)
	{
		exit(99);
	}
	else
	{
		wait(&status);
	}
	return (1);
}
