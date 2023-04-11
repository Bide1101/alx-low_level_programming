#include "main.h"

/**
* append_text_to_file - appends text at the end of a file.
* @filename: filename is the name of the file.
* @text_content: text_content is the NULL terminated string to add
* at the end of the file.
* Return: 1 or -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int letters, fp, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		fp = open(filename, O_WRONLY | O_APPEND, 0600);
		if (fp == -1)
			return (-1);
		for (; text_content[len] != '\0'; len++)
			;
		letters = write(fp, text_content, len);
		if (letters == -1)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
