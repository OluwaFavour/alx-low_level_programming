#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int ascii_value, sum;
	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		ascii_value = (rand() % 128);
		sum += ascii_value;
		printf("%c", ascii_value);
	}
	printf("%c", 2772 - sum);

	return (0);
}
