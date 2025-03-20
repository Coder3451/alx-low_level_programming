#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;
	ssize_t bytes_appended;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	len = 0;
	if (text_content)
	{
		while (text_content[len])
			len++;

		bytes_appended = write(fd, text_content, len);
		if (bytes_appended == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
