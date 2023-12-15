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
        if (comment == str)
        {
            *comment = '\0';
        }
    }
}
