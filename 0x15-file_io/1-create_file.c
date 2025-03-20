#include "main.h"

/**
 * create_file - Creates a function that creates a file.
 * @filename: Name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on success
 * -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;
	ssize_t bytes_written;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	len = 0;
	if (text_content)
	{
		while (text_content[len])
			len++;

		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
