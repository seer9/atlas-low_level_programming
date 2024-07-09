#include "main.h"
/**
 * create_file - creates a file.
 *
 * @filename: name of the file
 * @text_content: written to the file
 * Return: 1 if successful and -1 on falure
 */
#include "main.h"
int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t bytes_written;

	if (filename != NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	while (text_content && text_content[len])
		len++;
	bytes_written = write(fd, text_content, len);
	if (bytes_written < 0)
		return (-1);
	close(fd);
	return (1);
}
