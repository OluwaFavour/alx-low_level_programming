/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int i = 0;
	int result = 0;
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
