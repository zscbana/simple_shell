#include "shell.h"

/**
 * _excute - execute command
 * @argv:arguments
 */

void _excute(char **argv)
{
	char *cmd = NULL, *actual_cmd = NULL;
	int id;

	if (argv)
	{
		cmd = argv[0];
		actual_cmd = _location(cmd);
		id = fork();
		if (id == 0)
		{
			if (execve(actual_cmd, argv, environ) == -1)
				perror("Error");
		}
		else
			wait(NULL);
	}
}
