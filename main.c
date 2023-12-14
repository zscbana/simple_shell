#include "shell.h"

/**
 * main - entry point
 * Return: 0 success
 */

int main(void)
{
	char *cmd = NULL, **args;
	size_t n = 0;
	ssize_t read;

	while (1)
	{
		if (isatty(0))
			printf("hsh$ ");
		read = getline(&cmd, &n, stdin);
		if (read == -1 || strcmp("exit\n", cmd) == 0)
		{
			free(cmd);
			break;
		}
		cmd[read - 1] = '\0';
		args = _break(cmd, " ");
		args[0] = _location(args[0]);
		if (args[0] != NULL)
			_excute(args);
		else
			perror("Error");
		free(args);
	}
	return (0);
}
