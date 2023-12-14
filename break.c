#include "shell.h"

/**
 * _break - break string
 * @str: string
 * @sep: separator
 * Return: array of strings
 */

char **_break(char *str, char *sep)
{
	char *token, **break_str;
	int i = 0;

	token = strtok(str, sep);

	break_str = (char **)malloc(100 * sizeof(char *));

	if (!break_str)
	{
		free(break_str);
		return (NULL);
	}
	while (token)
	{
		break_str[i] = token;
		token = strtok(NULL, sep);
		i++;
	}
	return (break_str);
}
