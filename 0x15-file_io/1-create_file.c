#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: pointer to file name to cretae
 * @text_content: pointer to string to write
 * Return: 1 if success, -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int file_des, w, c;

	if (!filename)
		return (-1);
	file_des = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file_des == -1)
		return (-1);
	if (text_content == NULL)
		text_content = " ";
	if (text_content != NULL)
	{
		for (w = 0; text_content[w]; w++)
			;
	}
	c = write(file_des, text_content, w);
	if (c == -1)
		return (-1);
	close(file_des);
	return (1);
}
