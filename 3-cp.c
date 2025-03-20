#include "main.h"

/**
 * main - cp
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int fd, open_file_to, close_file_from, close_file_to, read_bytes, write_bytes;
	char *buffer;
	
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	open_file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (open_file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to  file %s\n", argv[2]);
		close(fd);
		exit(99);
	}

	buffer = malloc(1024);
	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Memory allocation failed\n");
		close(fd);
		close(open_file_to);
		exit(99);
	}

	while ((read_bytes = read(fd, buffer, 1024)) > 0)
	{
		write_bytes = write(open_file_to, buffer, read_bytes);
		if (write_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to  file %s\n", argv[2]);
			free(buffer);
			close(fd);
			close(open_file_to);
			exit(99);
		}
		
	}

	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		close(fd);
		close(open_file_to);
		exit(98);
	}

	free(buffer);

	close_file_from = close(fd);
	if (close_file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

	close_file_to = close(open_file_to);
	if (close_file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", open_file_to);
		exit(100);
	}

	return (0);
}
