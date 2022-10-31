#include "main.h"

/**
 * read_textfile - A function that read and print text file to stdout
 * @filename: A pointer to the file to read and print file.
 * @letters: number of bytes to be read and printed.
 * Return: 0 if the function fsiled, else number of bytes read snd printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t reader, fd, writer;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	reader = read(fd, buffer, letters);
	writer = write(STDOUT_FILENO, buffer, reader);

	if (fd == -1 || reader == -1 || writer == -1 || writer != reader)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (writer);
}
