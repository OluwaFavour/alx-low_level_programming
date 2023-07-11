#include <fcntl.h>
#include <unistd.h>
#include "main.h"

int _strlen(char *s);
/**
 * append_text_to_file - Appends text to the end of a file
 *
 * @filename: Filename is the name of the file
 * @text_content: This is the text to append to the file
 *
 * Return: Returns 1 (Success), or -1 (Failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedes;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (-1);
	filedes = open(filename, O_WRONLY | O_APPEND);
	if (filedes == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytesWritten = write(
		    filedes, text_content, _strlen(text_content));
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
