#include "main.h"

/**
 * read_textfile - reads textfiles and prints to stdout
 * @filename: pointer to textfile being read
 * @letters: number of letters to be read
 * Return: Actual No of letter read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t file_des, r, w;

	if (!filename)
	{
		return (0);
	}
	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
	{
		return (0);
	}
	r = read(file_des, buff, letters);
	if (r == -1)
	{
		free(buff);
		return (0);
	}
	w = write(STDOUT_FILENO, buff, r);
	free(buff);
	close(file_des);
	if (w == -1 || r != w)
	{
		return (0);
	}
	return (w);
}
