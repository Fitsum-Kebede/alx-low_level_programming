#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing
 * Return: A pointer to the newly-allocated buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
	}

/**
 * close_file - closes
 * @fd: descripter
 */

void close_file(int fd)
{
	int ca;

	ca = close(fd);

	if (ca == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the contents
 * @argc: num of arg
 * @argv: an array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int f;
	int t;
	int rr;
	int o;
	char *buffer;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}

	buffer = create_buffer(argv[2]);
	f = open(argv[1], O_RDONLY);
	rr = read(f, buffer, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
	if (f == -1 || rr == -1)
	{
	dprintf(STDERR_FILENO,
	"Error: Can't read from file %s\n", argv[1]);
	free(buffer);
	exit(98);
	}
	o = write(t, buffer, rr);
	if (t == -1 || o == -1)
	{
	dprintf(STDERR_FILENO,
	"Error: Can't write to %s\n", argv[2]);
	free(buffer);
	exit(99);
	}
	rr = read(f, buffer, 1024);
	t = open(argv[2], O_WRONLY | O_APPEND);

	} while (rr > 0);

	free(buffer);
	close_file(f);
	close_file(t);


