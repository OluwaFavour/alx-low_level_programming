/* 101-quote.c */
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	size_t message_len;
	ssize_t result;
	char message[] = "and that piece of art is useful\" \
- Dora Korpar, 2015-10-19\n";
	message_len = sizeof(message) - 1;
	result = write(STDERR_FILENO, message, message_len);

	if (result != ((ssize_t)message_len))
		return (1);

	return (1);
}
