#include "main.h"
/**
 * read_textfile - read a text file and uses it as POSIX stdout.
 *
 * @filename: file to be opened
 * @letters: the letters it should read and print.
 * Return: numberof letters to print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t Open, Read, Write;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	Open = open(filename, O_RDONLY);

	if (Open == -1)
		return (0);

	Read = read(Open, buffer, letters);

	if (Read == -1)
	{
		free(buffer);
		return (0);
	}

	Write = write(STDOUT_FILENO, buffer, Read);

	if (Write == -1 || Write != Read)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(Open);
	return (Write);
}
