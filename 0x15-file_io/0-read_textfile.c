#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
  * read_textfile - Reads a text file and prints it to the standard output
  *
  * @filename: The text file to read
  * @letters: Number of letters to be read and printed
  *
  * Return: Returns the number of letters actually read and printed (Success)
  * or 0 (Fail)
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedes;
	char *buffer;
	ssize_t lettersRead;
	ssize_t lettersPrinted;

	if (filename == NULL)
		return (0);
	/* Open File */
	filedes = open(filename, O_RDONLY);
	if (filedes == -1)
		return (0);
	/* Read file to buffer */
	buffer = malloc(letters + 1);
	if (buffer == NULL)
		return (0);
	lettersRead = read(filedes, buffer, letters);
	if (lettersRead == -1)
		return (0);
	/* Close file */
	if (close(filedes) == -1)
		return (0);
	/* Write buffer to standard output */
	lettersPrinted = write(STDOUT_FILENO, buffer, letters);
	free(buffer);
	if (lettersPrinted == -1)
		return (0);

	return (lettersPrinted);
}
