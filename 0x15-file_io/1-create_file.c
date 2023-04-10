#include "main.h"

/**
 * create_file - create file
 * @filename: filename
 * @text_content: number od letters
 * Return: Returns 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int f;
	int t;

	if (filename == NULL)
	return (-1);
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
	return (-1);
	if (text_content != NULL)
	{
	t = write(f, text_content, strlen(text_content));
	if (t == -1)
	return (-1);
	}
	close(f);
	return (1);
}
