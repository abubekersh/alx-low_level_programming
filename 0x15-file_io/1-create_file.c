#include "main.h"

/**
 * create_file - create a file if it not exist
 * @filename: name of the file
 * @text_content: the content of the file
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	mode_t per;
	ssize_t bwr;

	per = S_IRUSR | S_IWUSR;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, per);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
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
