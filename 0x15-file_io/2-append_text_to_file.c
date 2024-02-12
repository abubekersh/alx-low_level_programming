#include "main.h"

/**
 * append_text_to_file - append a text into the file
 * @filename: name of the file
 * @text_content: the text to be added
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	ssize_t bwr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	i = 0;
	while (text_content[i] != '\0')
	{
		bwr = write(fd, &text_content[i], 1);
		if (bwr == -1)
		{
			close(fd);
			return (-1);
		}
		i++;
	}
	close(fd);
	return (1);
}
