#include "main.h"

#define BUFF_SIZE 1024

void close_fd(int file_des);

/**
 * close_fd - close file descriptors
 * @file_des: file descriptor
 */
void close_fd(int file_des)
{
	int i;

	i = close(file_des);
	if (i == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_des);
		exit(100);
	}
}

/**
 * main - copies one file to the other
 * @argc: number of arguments passed
 * @argv: array of pointers to arguments
 * Return: 0 on success, exit if fail
 */
int main(int argc, char *argv[])
{
	int from, to, w, r;
	char buff[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usuage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((r = read(from, buff, BUFF_SIZE)) > 0)
	{
		w = write(to, buff, r);
		if (w == -1)
		{
			dprintf(2, "Erro: Can't write to %s\n", argv[2]);
			close_fd(from);
			close_fd(to);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		close_fd(from);
		close_fd(to);
		exit(98);
	}
	close_fd(from);
	close_fd(to);
	return (0);
}
