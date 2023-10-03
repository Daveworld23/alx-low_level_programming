#include "main.h"

#define BUFF_SIZE 1024

void close_f(int file_d);

/**
 * close_f - close file descriptor
 * @file_d: file descriptor
 */
void close_f(int file_d)
{
	int i;

	i = close(file_d);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_d);
		exit(100);
	}
}

/**
 * main - Copies from one file to the other
 * @argc: Number of argument passed to the program
 * @argv: Array of pointers to arguments
 * Return: 0 on success, otherwise exit.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char buff[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", argv[2]);
		exit(99);
	}
	r = read(from, buff, BUFF_SIZE);
	{
		w = write(to, buff, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_f(from);
	close_f(to);
	return (0);
}
