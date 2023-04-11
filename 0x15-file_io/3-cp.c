#include <stdio.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * _error - checks if files can be opened
 * @e: Error number
 * @filename: File name
 */

void _error(int e, char *filename)
{
	if (e == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	if (e == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
/**
 * cp - Copies the content of a file to another file.
 * @file_from: Name of file
 * @file_to: Name of the destination file
 * Return: 1 or -1
 */

void cp(char *file_from, char *file_to)
{
	int res_read;
	int fd;
	int res_write;
	int fd_w;
	char *buf[1024];

	/* READ */
	fd = open(file_from, O_RDONLY);
	if (fd < 0)
		_error(98, file_from);
	/* WRITE */
	fd_w = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_w < 0)
	{
		close(fd);
		_error(99, file_to);
	}
	do {
		/* READ */
		res_read = read(fd, buf, 1024);
		if (res_read < 0)
			_error(98, file_from);
		/* WRITE */
		res_write = write(fd_w, buf, res_read);
		if (res_write < res_read)
			_error(99, file_to);
	}	while (res_write == 1024);
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		close(fd_w);
		exit(100);
	}
	if (close(fd_w) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_w);
		exit(100);
	}
}
/**
 * main - Copies the content of a file
 * @ac: Argument count
 * @av: argument values
 * Return: 0 or -1
 */

int main(int ac, char *av[])
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(av[1], av[2]);
	return (0);
}
