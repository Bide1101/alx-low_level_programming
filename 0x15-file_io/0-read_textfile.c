#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: file to be read.
* @letters: the number of letters it should read and print.
* Return: the actual number of letters it could read and print or 0.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	int fp, readletters;
	ssize_t copiedletters

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	ptr = malloc(letters * sizeof(char));
	if (ptr == NULL)
	{
		close(fp);
		return (0);
	}

	readletters = read(fp, ptr, letters);
	if (readletters == -1)
	{
		free(ptr);
		close(fp);
		return (0);
	}

	copiedletters = write(STDOUT_FILENO, ptr, readletters)
	if (copiedletters != readletters || copiedletters == -1)
	{
		free(ptr);
		close(fp);
		return (0);
	}
	free(ptr);
	close(fp);

	return (copiedletters);
}
