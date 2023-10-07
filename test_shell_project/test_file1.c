#include "shell.h"

/**
 * print_prompt - displays the shell prompt
 */
void print_prompt(void)
{
	char prompt[] = "simple_shell$ ";
	write(STDOUT_FILENO, prompt, sizeof(prompt) - 1);
}

/**
 * get_input - Accepts and reads input
 * @buffer: input storage
 * Return: Number of inputs
 */
int get_input(char *buffer)
{
	ssize_t bytes;
	char *type = NULL;
	size_t len = 0;

	bytes = getline(&type, &len, stdin);
	if (bytes == -1)
	{
		if (feof(stdin))
		{
			free(type);
			return (-1);
		}
		perror("ERROR getline failed");
		free(type);
		exit(EXIT_FAILURE);
	}
	if (type[bytes - 1] == '\n')
	{
		type[bytes - 1] = '\0';
	}
	strcpy(buffer, type);
	free(type);
	return (0);
}

/**
 * _execute - executes a command
 * @exe: the command to execute
 */
void _execute(const char *exe)
{
	pid_t ch_pid;
	int status;

	ch_pid = fork();
	if (ch_pid == -1)
	{
		perror("ERROR Fork failed");
		exit(EXIT_FAILURE);
	}
	if (ch_pid == 0)
	{
		char *args[] = {(char*)exe, NULL};
		if (execvp(exe, args) == -1)
		{
			perror("Execution error");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if (waitpid(ch_pid, &status, 0) == -1)
		{
			perror("ERROR Waitpid failed");
			exit(EXIT_FAILURE);
		}
	}
}

int main(void)
{
	char input_buff[BUFF_SIZE];

	while (1)
	{
		print_prompt();
		if (get_input(input_buff) == -1)
		{
			continue;
		}
		_execute(input_buff);
	}
	return (0);
}
