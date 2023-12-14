#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>

char **_break(char *str, char *sep);
char *_location(char *command);
char *_getenv(char *env_var);
void _env(void);
int _excute(char **argv);
int empty(char *buff);

/* String funcation*/
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
char *_strdup(const char *str);

extern char **environ;

#endif
