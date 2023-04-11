#include "main.h"

/**
* main - a program that copies the content of a file to another file.
* @argc: argument count.
* @argv: argument vector.
* Return: 0 Always
*/

int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t read_bytes, bytes_written;
	char buffer[1024];

	if (argc != 3)
	{	dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((read_bytes = read(file_from, buffer, 1024)) > 0)
	{	bytes_written = write(file_to, buffer, read_bytes);
		if (bytes_written != read_bytes)
		{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (read_bytes == -1 || bytes_written == -1)
	{	perror("Error");
		exit(99);
	}
	if (close(file_from) == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	chmod(argv[2], 0664);
	return (0);
}
