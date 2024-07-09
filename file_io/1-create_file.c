#include "main.h"
/**
 * create_file - creates a file.
 *
 * @filename: name of the file
 * @text_content: written to the file
 * Return: 1 if successful and -1 on falure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;

	len = 0;

	if (filename != NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	while (text_content && text_content[len])
		len++;
	if (write(fd, text_content, len) < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
