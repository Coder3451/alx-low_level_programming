#include "main.h"

/**
 * print_error_exit - Prints and error message and exits.
 * @code: exit code.
 * @message: error message.
 * @file: filename causing the error.
 */
void print_error_exit(int code, const char *message, const char *file)
{
	dprintf(STDERR_FILENO, message, file);
	exit(code);
}

/**
 * close_file - Closes a file and handles errors.
 * @fd: File descriptor to close.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - cp
 * @argc: count arguments.
 * @argv: the arguments passed.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, read_bytes, write_bytes;
	char buffer[1024];

	if (argc != 3)
		print_error_exit(97, "Usage: cp file_from file_to\n", "");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error_exit(99, "Error: Can't write to file %s\n", argv[2]);
	}

	while ((read_bytes = read(fd_from, buffer, 1024)) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes == -1)
		{
			close_file(fd_from);
			close_file(fd_to);
			print_error_exit(99, "Error: Can't write to file %s\n", argv[2]);
		}
	}

	if (read_bytes == -1)
	{
		close_file(fd_from);
		close_file(fd_to);
		print_error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
