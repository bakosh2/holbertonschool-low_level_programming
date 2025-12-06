#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

/**
 * close_file - safely closes a file descriptor
 * @fd: file descriptor
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
 * create_buffer - allocate memory for copy buffer
 * Return: pointer to buffer
 */
char *create_buffer(void)
{
	char *buf = malloc(BUF_SIZE);

	if (!buf)
	{
		dprintf(STDERR_FILENO, "Error: Can't allocate buffer\n");
		exit(99);
	}
	return (buf);
}

/**
 * open_files - open source and destination files
 * @file_from: source file
 * @file_to: destination file
 * @fd_from: pointer to store source fd
 * @fd_to: pointer to store destination fd
 */
void open_files(char *file_from, char *file_to, int *fd_from, int *fd_to)
{
	*fd_from = open(file_from, O_RDONLY);
	if (*fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	*fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (*fd_to == -1)
	{
		close_file(*fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
}

/**
 * copy_content - read from source and write to destination
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 */
void copy_content(int fd_from, int fd_to)
{
	ssize_t r_bytes, w_bytes;
	char *buf = create_buffer();

	while ((r_bytes = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		w_bytes = write(fd_to, buf, r_bytes);
		if (w_bytes != r_bytes)
		{
			free(buf);
			close_file(fd_from);
			close_file(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			exit(99);
		}
	}

	if (r_bytes == -1)
	{
		free(buf);
		close_file(fd_from);
		close_file(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		exit(98);
	}

	free(buf);
}

/**
 * main - entry point
 * @ac: argument count
 * @av: argument vector
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	open_files(av[1], av[2], &fd_from, &fd_to);
	copy_content(fd_from, fd_to);
	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
