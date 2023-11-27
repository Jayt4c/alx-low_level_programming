#include "main.h"

/**
 * read - reads text file and prints to standard output
 * @filename: name of file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	size_t scan_read, scan_write;

	if (filename == NULL)
	{
		fprintf(stderr, "No parameters\n");
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		perror("Error in opening file");
		return (0);
	}

	buffer = malloc(letters);

	if (buffer == NULL)
	{
		perror("Error in allocating memory");
		return (0);
	}

	scan_read = read(fd, buffer, letters);
	if (scan_read < 1)
	{
		perror("Error in reading file");
		return (0);
	}

	scan_write = write(STDOUT_FILENO, buffer, scan_read);
	if (scan_read < 1)
	{
		perror("Error writing to standard output");
		return (0);
	};

	free(buffer);
	close(fd);
	return (scan_write);
}
