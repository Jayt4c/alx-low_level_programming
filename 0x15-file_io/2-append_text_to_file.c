#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name f the file
 * @text_content: text to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, scan_write, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (len = 0; text_content[len] != '\0'; len++)
		;

	scan_write = write(fd, text_content, len);
	if (scan_write < 1)
	{
		perror("Error encountered writing to the file");
		return (-1);
	}

	close(fd);
	return (1);
}
