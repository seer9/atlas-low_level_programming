#include "main.h"
/**
 * append_text_to_file - appends text to the end of a file
 *
 * @filename: name of the file
 * @text_content: the string to be added at the end of a file.
 * Return: 1 if success or -1 otherwise.
 *
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int Open, Write, len;

	len = 0;
	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
		{
			len++;
		}
	}

	Open = open(filename, O_WRONLY | O_APPEND);

	if (Open < 0)
		return (-1);

	Write = write(Open, text_content, len);

	if (Write < 0)
		return (-1);
	close(Open);
	return (1);
}
