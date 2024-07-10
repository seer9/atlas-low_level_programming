#include "main.h"
/**
 * close_f - closes the file descriptor
 *
 * @fd: file descriptor
 */
void close_f(int fd)
{
	int n;

	n = close(fd);

	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(99);
	}
}
/**
* buffer - creates a buffer of 1024 bytes.
*
* @file: file descriptor
* Return: buffer
*/
char *buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}
/**
 * main - copies whats in a file to another
 *
 * @argc: number of arguments
 * @argv: the object of arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int to, from, Read, Write;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = buffer(argv[2]);
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	from = open(argv[1], O_RDONLY);
	Read = read(from, buf, 1024);

	if (to == -1 || from == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
		free(buf);
		exit(98);
	}

	Write = write(to, buf, Read);

	if (Write == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
		free(buf);
		close_f(to);
		exit(99);
	}
	close_f(to);
	close_f(from);
	free(buf);
	return (0);
}
