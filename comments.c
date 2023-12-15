#include "shell.h"

/**
 * remove_comments - Removes comments from a string
 * @str:string to be modified.
 */

void remove_comments(char *str)
{
	char *comment = strchr(str, '#');

	if (comment != NULL)
	{
		*comment = '\0';
		printf("5114\n");
	}
}