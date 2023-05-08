#include "main.h"
#include <fcntl.h>
#include <unistd.h>

int _strlen(char *s);
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
	int filedes;
	ssize_t bytesWritten = 0;
	mode_t permissions = S_IRUSR | S_IWUSR; /* rw------- */

	if (filename == NULL)
		return (-1);
	/* Open/create file */
	filedes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, permissions);
	if (filedes == -1)
		return (-1);
	/* Write to file */
	if (text_content != NULL)
	{
		bytesWritten = write(filedes, text_content, _strlen(text_content));
		if (bytesWritten == -1)
		{
			close(filedes);
			return (-1);
		}
	}
	if (close(filedes) == -1)
		return (-1);
	return (1);
}

/**
 * _strlen - Returns the length of a string
 * @s: The string to compute
 *
 * Return: Returns the length of the string
 */
int _strlen(char *s)
{
	char *p = s;

	while (*p)
		p++;
	return ((int)(p - s));
}
