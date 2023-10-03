#include "main.h"

/**
 * create_file - function thst creates a file
 * @filename: pointer to the name of file to create
 * @text_content: pointer to string to write to the file
 *
 * Return: 1 if success, -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, w, e;

	if (!filename)
		return (-1);
	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file_d == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (w = 0; text_content[w]; w++)
			;
	}
	e = write(file_d, text_content, w);
	if (e == -1)
		return (-1);
	close(file_d);
	return (1);
}
