#include "main.h"

/**
 * read_textfile - reads textfile and prints to POSIX stdout
 * @filename: pointer to text file being rrad
 * @letters: number of letters to be read
 * Return: Actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t file_d, r, w;

	if (!filename)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	r = read(file_d, buff, letters);
	if (r == -1)
	{
		free(buff);
		return (0);
	}
	w = write(STDOUT_FILENO, buff, r);
	free(buff);
	close(file_d);
	if (w == -1 || r != w)
		return (0);
	return (w);
}
