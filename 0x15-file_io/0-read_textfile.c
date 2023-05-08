#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

/**
  * read_textfile - Reads a text file and prints to the POSIX standard output
  *
  * @filename: File to read from
  * @letters: Number of letters to read and print
  *
  * Return: Returns the number of letters it could read and print (Success)
  * or 0 (Fail)
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t nread, nwritten;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	nread = read(fd, buf, letters);
	if (nread == -1)
	{
		free(buf);
		return (0);
	}
	close(fd);
	nwritten = write(STDOUT_FILENO, buf, nread);
	if (nwritten < nread)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (nwritten);
}
