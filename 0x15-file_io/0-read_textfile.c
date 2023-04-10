#include "main.h"

/**
 * read_textfile - reads and prints file
 * @filename: pointer to the name of the file
 * @letters: the number of letters
 * Return: chars read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char *buffer;
	ssize_t byte;
	ssize_t r;

	if (!filename)
	return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
	{
	close(f);
	return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
	close(f);
	return (0);
	}

	byte = read(f, buffer, letters);

	if (byte == -1)
	{
	close(f);
	free(buffer);
	return (0);
	}
	r = write(STDOUT_FILENO, buffer, byte);

	if (r == -1)
	{
	close(f);
	free(buffer);
	return (0);
	}
	close(f);
	return (byte);
}
