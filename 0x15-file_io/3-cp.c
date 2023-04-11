#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 1024
#endif /* BUFFER_SIZE */

void copy_file(const char *file_from, const char *file_to);
void print_file_from_err(const char *file_from);
void print_file_to_err(const char *file_to);
void print_close_file_err(int fd);

/**
  * print_file_from_err - Prints the error regarding file reading
  *
  * @file_from: File to read from
  */
void print_file_from_err(const char *file_from)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98);
}

/**
  * print_file_to_err - Prints the error regarding file writing
  *
  * @file_to: File to write to
  */
void print_file_to_err(const char *file_to)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
	exit(99);
}

/**
  * print_close_file_err - Prints error regarding closing of files
  *
  * @fd: File descriptor of file to close
  */
void print_close_file_err(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
  * copy_file - Copies the content of a file to another file
  *
  * @file_from: File to copy from
  * @file_to: File to copy to
  */
void copy_file(const char *file_from, const char *file_to)
{
	int filedes_from, filedes_to;
	char buffer[BUFFER_SIZE + 1];
	ssize_t bytesRead, bytesWritten;
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (file_from == NULL)
		print_file_from_err(file_from);
	if (file_to == NULL)
		print_file_to_err(file_to);
	filedes_from = open(file_from, O_RDONLY);
	if (filedes_from == -1)
		print_file_from_err(file_from);
	filedes_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (filedes_to == -1)
		print_file_to_err(file_to);

	while ((bytesRead = read(filedes_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytesWritten = write(filedes_to, buffer, bytesRead);
		if (bytesRead < BUFFER_SIZE)
			break;
		if (bytesWritten != bytesRead)
			print_file_to_err(file_to);
	}
	if (bytesRead == -1)
		print_file_from_err(file_from);

	if (close(filedes_from) == -1)
		print_close_file_err(filedes_from);
	if (close(filedes_to) == -1)
		print_close_file_err(filedes_to);
}

/**
  * main - Copies the content of a file to another file
  *
  * @ac: Argument counter
  * @av: A list of two files as argument to the program
  *
  * Return: Returns 0 (Success)
  */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(av[1], av[2]);

	return (0);
}
