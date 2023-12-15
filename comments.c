#include "shell.h"
/**
 * remove_comments - Removes comments from the beginning of a string
 * @str: String to be modified.
 */
void remove_comments(char *str)
{
	char *comment = strchr(str, '#');

	if (comment != NULL)
	{
		*comment = '\0';
	}
}
