#include "main.h"
#include <stdlib.h>

/**
  * print_error - Prints Error to the standard output
  */
void print_error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
}

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
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
unsigned long int _atoi(char *s)
{
	int i = 0;
	unsigned long int result = 0;
	int sign = 1;
	char current_char;

	while (*(s + i) != '\0')
	{
		current_char = *(s + i);
		if (current_char == '-')
		{
			sign *= -1;
		}
		if (current_char >= '0' && current_char <= '9')
		{
			int j = i;

			while (*(s + j) >= '0' && *(s + j) <= '9')
			{
				result = (result * 10) + *(s + j) - '0';
				j++;
			}
			break;
		}
		i++;
	}
	if (sign < 0)
		result *= sign;
	return (result);
}

/**
  * print_number - Prints an integer
  * @n: Integer to print
  */
void print_number(int n)
{
	unsigned long int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	if (num / 10)
		print_number(num / 10);
	_putchar(num % 10 + '0');
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
	char *num1, *num2;
	unsigned long int n1, n2, res;

	if (ac != 3)
	{
		print_error();
		exit(98);
	}
	num1 = av[1];
	num2 = av[2];
	if (_isdigit_helper(num1) == 0 || _isdigit_helper(num2) == 0)
	{
		print_error();
		exit(98);
	}

	n1 = _atoi(num1);
	n2 = _atoi(num2);
	res = n1 * n2;
	print_number(res);
	_putchar('\n');

	return (0);
}
