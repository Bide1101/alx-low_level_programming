#include "main.h"

/**
* create_file - a function that creates a file.
* @filename: name of the file to create.
* @text_content: a NULL terminated string to write to the file.
* Return: 1 or -1.
*/


int create_file(const char *filename, char *text_content)
{
	ssize_t letters, len = 0;
	int fp;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fp);
		return (1);
	}

	while (text_content[len] != '\0')
		len++;
	letters = write(fp, text_content, len);
	if (letters == -1)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
