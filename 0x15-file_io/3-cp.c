#include "main.h"

#define BUFF_SIZE 1024

/**
 * main - Copies from one file to the other
 * @argc: Number of argument passed to the program
 * @argv: Array of pointers to arguments
 *
 * Return: 0 on success, otherwise exist.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buff[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	*buff = (argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
	for (; r > 0;)
	{
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		w = write(to, buff, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		r = read(from, buff, 1024);
		to = open(argv[2], O_WRONGLY | O_APPEND);
	}
	free(buff);
	close(from);
	close(to);
	if (close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n" close);
		exit(100);
	}
	return (0);
}

