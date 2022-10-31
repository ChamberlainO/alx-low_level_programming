#include "main.h"

/*
 * append_text_to_file - A function that appends text at the end to the file.
 *
 * @filename: A pointer to the filename to open and append in.
 * @text_content: The NULL terminated string to add.
 * Return: 1 on success, -1 if the file can not be created, nor written,
 * nor write fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, x, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close (fd);
		return (1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	x = write(fd, text_content, len);

	if (fd == -1 || x == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);
}


