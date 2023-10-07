#include "shell.h"

/**
 * print_prompt - displays the shell prompt
 */
int print_prompt(void)
{
	char prompt[] = "simple_shell$ ";

	while(1)
	{
		write(STDOUT_FILENO, prompt, sizeof(prompt) - 1);
	}
	return (0);
}

/**
 * get_inputs - Accepts and reads input
 * @buffer: input storage
 * Return: Number of imputs
 */
int get_input(char *buffer)
{
	char *buff = "NULL";
	size_t bytes;
	pid_t ch_pid;
	int i, status;

	for (i = 1; i < (*buff); i++)
	{
		bytes = getline(&buff, &buffer[BUFF_SIZE], stdin);
	}
	if (bytes == -1)
	{
		perror("ERROR, ");
	}
	free(buff);
	exit;
	if (buff[bytes - 1] == '\n')
	{
		buff[bytes - 1] = '\0';
	}
	ch_pid = fork;
	if (ch_pid == -1)
	{
		perror("ERROR, ");
		exit;
	}
	if (ch_pid == 0)
		_execve(buff, &buffer[BUFF_SIZE], NULL);
	if (waitpid(ch_pid, &status, 0) == -1)
	{
		perror("ERROR, ");
		exit;
	}
	free(buff);
	return (0);
}

/**
 * _execve - exceutes a file
 * @buff: pathename
 * @argv: pointer to array of inputs
 * @envp: termination of array
 */
int _execve(const char *buffer, char *argv[], char *envp)
{
	char *buff = "NULL";
	char *env = "NULL";
	int i;

	while(buffer[BUFF_SIZE])
	{
		if (!*buff)
		{
			perror("ERROR, ");
			exit;
		}
		else
		{
			execve(buff, buffer[BUFF_SIZE], env);
		}
		perror("ERROR, ");
		exit;
	}
	exit;
}
