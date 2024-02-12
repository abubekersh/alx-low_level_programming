#include "main.h"

/**
 * read_textfile - read text file and display it
 * @filename: the file
 * @letters: how much to read || write
 * Return: the readed size
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char ch;
	ssize_t bwr;
	size_t i;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	i = 0;
	while (read(fd, &ch, 1) != 0 && i < letters)
	{
		bwr = write(STDOUT_FILENO, &ch, 1);
		if (bwr  == -1)
		{
			close(fd);
			return (0);
		}
		i++;
	}
	close(fd);
	return (i);
}
