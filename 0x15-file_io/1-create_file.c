#include "main.h"

/**
 * create_file - creates a file and fills it with characters
 * @filename: name of file to be created
 * @text_content: text to write in the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len, scan_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);
	if (fd == -1)
	{
		perror("Error opening the file");
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;

		scan_write = write(fd, text_content, len);
		if (scan_write == -1)
		{
			perror("Error writing to the file");
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
