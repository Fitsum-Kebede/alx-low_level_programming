#include "main.h"
#include <string.h>

/**
 * append_text_to_file- apends text to file
 * @filename: path to a file
 * @text_content: content
 * Return: 1 or -1
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int t;
	int f;

	if (filename == NULL)
	return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
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
