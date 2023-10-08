#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>

#define BUFF_SIZE 1024

void print_prompt(void);
int get_input(char *buffer);
void _execute(const char *exe, char *const args[], char *const envp[]);

#endif
