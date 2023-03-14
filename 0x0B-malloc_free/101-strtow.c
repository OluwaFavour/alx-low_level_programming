#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string
 *
 * @str: String to evaluate
 *
 * Return: Number of words in the string
 */
int count_words(char *str)
{
	int flag, i, word_count;

	flag = 0;
	word_count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			word_count++;
		}
	}

	return (word_count);
}

/**
  * strtow - Splits a string delimited by spaces into words
  *
  * @str: String to split
  *
  * Return: Returns a pointer to an array of strings (Success), or NULL (fail)
  */
char **strtow(char *str)
{
	char **result, *tmp;
	int i, index = 0, str_length = 0, word_count, c = 0, start, end;

	while (*(str + str_length))
		str_length++;
	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i <= str_length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				result[index] = tmp - c;
				index++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	result[index] = NULL;

	return (result);
}
