#include "main.h"

/**
 * create_file - A function that creates a file.
 *
 * @filename: pointer to the file name to be created.
 * @text_content: str to be written in the file.
 * Return: 1 on success, else -1 on fail.
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fd, x, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(fd, text_content, len);

	if (fd == -1 || x == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);
}
