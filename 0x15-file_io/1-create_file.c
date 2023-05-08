#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
  * create_file - Creates a file
  *
  * @filename: The name of the file to create
  * @text_content: A NULL terminated string to write to the file
  *
  * Return: Returns 1 (Success), or -1 (Failure)
  */
int create_file(const char *filename, char *text_content)
{
	char *text;
	int fd, len;
	ssize_t nwritten;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		text = text_content;
		len = 0;
		while (*text != '\0')
		{
			len++;
			text++;
		}
		len++;
		nwritten = write(fd, text_content, len);
		if (nwritten < len)
			return (-1);
	}
	close(fd);
	return (1);
}
