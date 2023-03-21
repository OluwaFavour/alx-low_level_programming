#include "main.h"
#include <stdlib.h>

/**
  * _isdigit_helper - Checks for a digit
  * @s: Digit to check for
  *
  * Return:
  * Returns 1 (True)
  * Returns 0 (False)
  */
int _isdigit_helper(char *s)
{
	int i, flag;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 1;
		if (!(s[i] >= 48 && s[i] <= 57))
		{
			flag = 0;
			break;
		}
	}

	return (flag);
}

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */
void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_multiply - multiply 2 numbers together
 * @n1: text representation of 1st number to multiply
 * @n2: text representation of 2nd number to multiply
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */
char *infinite_multiply(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, val1, val2, temp_prod, temp_sum;
	int len1 = 0, len2 = 0;

	/* calculate length of the numbers */
	while (*(n1 + len1) != '\0')
		len1++;
	while (*(n2 + len2) != '\0')
		len2++;

	/* multiply each digit of n1 with n2 and add the result */
	for (i = 0; i < len1; i++)
	{
		val1 = *(n1 + len1 - i - 1) - '0';
		if (val1 == 0)
			continue;
		k = 0;
		for (j = 0; j < len2; j++)
		{
			val2 = *(n2 + len2 - j - 1) - '0';
			temp_prod = val1 * val2 + k;
			k = temp_prod / 10;
			temp_sum = *(r + i + j) - '0' + temp_prod % 10 + k;
			k = temp_sum / 10;
			*(r + i + j) = temp_sum % 10 + '0';
		}
		*(r + i + j) += k;
	}

	/* trim leading zeros */
	i = size_r - 1;
	while (*(r + i) == '0' && i > 0)
		i--;
	if (i >= size_r)
		return (0);
	*(r + i + 1) = '\0';

	/* reverse the result */
	rev_string(r);

	return (r);
}

/**
  * _puts - Prints a string followed by a new line to stdout
  * @str: String to print out
  */
void _puts(char *str)
{
	char *p = str;

	while (*p)
	{
		_putchar(*p);
		p++;
	}
	_putchar('\n');
}

/**
  * main - This program multiplies two positive numbers
  *
  * @ac: Argument count
  * @av: Argument vector
  * Return: Always 0 (Success)
  */
int main(int ac, char **av)
{
	char *num1, *num2, *res, *ptr;
	int nmemb;

	nmemb = 512;
	ptr = malloc(512 * sizeof(char));
	if (ac != 3)
	{
		_puts("Error");
		exit(98);
	}
	num1 = av[1];
	num2 = av[2];
	if (_isdigit_helper(num1) == 0 || _isdigit_helper(num2) == 0)
	{
		_puts("Error");
		exit(98);
	}

	res = infinite_multiply(num1, num2, ptr, (nmemb * sizeof(char)));
	_puts(res);

	return (0);
}
