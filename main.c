#include "shell.h"

/**
 * main - entry point
 * Return: 0 success
 */

int main(void)
{
	char *cmd = NULL, **args, *comment;
	size_t n = 0;
	ssize_t read;
	int exit_status = 0;

	while (1)
	{
		if (isatty(0))
			printf("hsh$ ");
		read = getline(&cmd, &n, stdin);
		if (read == -1 || _strcmp("exit\n", cmd) == 0)
		{
			free(cmd);
			break;
		}
		comment = _strchr(cmd, '#');
		if (comment != NULL)
		{
			*comment = '\0';
		}
		cmd[read - 1] = '\0';
		if (_strcmp("env", cmd) == 0)
		{
			_env();
			continue;
		}
		if (empty(cmd) == 1)
		{
			exit_status = 0;
			continue;
		}
		args = _break(cmd, " ");
		args[0] = _location(args[0]);
		if (args[0] != NULL)
			exit_status = _excute(args);
		else
			perror("Error");
		free(args);
	}
	return (exit_status);
}
