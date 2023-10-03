#include "main.h"

/**
 * append_text_to_file - function that appends text at EOF
 * @filename: pointer to name of the file
 * @text_content: string to add to end of file
 *
 * Return: 1 on success and if file exists
 * -1 on failure and if file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, len, perm;

	if (!filename)
		return (-1);
	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d == -1)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		perm = write(file_d, text_content, len);
		if (perm == -1)
			return (-1);
	}
	close(file_d);
	return (1);
}
