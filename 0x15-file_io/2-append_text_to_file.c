#include "main.h"

/**
 * append_text_to_file - function that appends text to file
 * @filename: pointer to file name
 * @text_content: string to add to end of file
 *
 * Return: 1 on success and file exist, -1 on failure and file doesn't exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_des, len, p;

	if (!filename)
		return (-1);
	file_des = open(filename, O_WRONLY | O_APPEND);
	if (file_des == -1)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		p = write(file_d, text_content, len);
		if (p == -1)
			return (-1);
	}
	close(file_des);
	return (1);
}
