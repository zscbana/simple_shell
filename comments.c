#include "shell.h"

/**
 * remove_comments - Removes comments from a string
 * @str:string to be modified.
 */

void remove_comments(char *str)
{
    char *comment = _strchr(str, '#');

    if (comment != NULL && comment == str)
    {
        *comment = '\0';
    }
}
