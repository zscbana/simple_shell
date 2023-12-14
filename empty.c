#include "shell.h"
/**
 *  empty - checks if exists a empty line
 * @buff: line
 * Return: 0 success or 1 fail
 */

int empty(char *buff)
{
	int i;

	for (i = 0; buff[i] != '\0'; i++)
	{
		if (buff[i] != ' ')
			return (0);
	}
	return (1);
}
