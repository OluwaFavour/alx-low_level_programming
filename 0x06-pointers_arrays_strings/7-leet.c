#include "main.h"

/**
  * leet - encodes a string into 1337
  * @str: String to encode
  *
  * Return: Returns a pointer to the encoded string
  */
char *leet(char *str)
{
	char c, leet_map[256] = {0};
	int i;

	char *letters = "aAeEoOtTlL";
	char *leet_subs = "4433007711";

	for (i = 0; letters[i] != '\0' && leet_subs[i] != '\0'; i++)
		leet_map[(int)letters[i]] = leet_subs[i];

	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		if (leet_map[(int)c])
			str[i] = leet_map[(int)c];
	}

	return (str);
}
