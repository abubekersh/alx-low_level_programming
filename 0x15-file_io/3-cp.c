#include "main.h"

/**
 * copy_to - copy from one file to other
 * @file_from: src
 * @file_to: dest
 * Return: void
 */
void copy_to(const char *file_from, const char *file_to)
{
	int fd1;
	int fd2;
	char ch[1024];
	ssize_t bwr;
	ssize_t brd;
	mode_t  prem;

	prem = 0664;
	fd1 = open(file_from, O_RDONLY);
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, prem);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((brd = read(fd1, &ch, 1024)) != 0)
	{
		bwr = write(fd2, &ch, brd);
		if (bwr == -1)
		{
			close(fd1);
			close(fd2);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	close(fd1);
	close(fd2);
}

/**
 * main - entry of the programm
 * @argv: argument vector
 * @argc: arguments size
 * Return: int
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	copy_to(argv[1], argv[2]);
	return (0);
}
