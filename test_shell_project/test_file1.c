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
	if (bytes > 0 && buffer[bytes - 1] == '\n')
	{
		buffer[bytes - 1] = '\0';
	}
	return (0);
}

/**
 * _execute - executes a command
 * @exe: the command to execute
 * @args: NULL
 * @envp: NULL
 */
void _execute(const char *exe, char *const args[], char *const envp[])
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
		if (execve(exe, args, envp) == -1)
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
