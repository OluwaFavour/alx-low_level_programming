#include "main.h"

/**
  * jack_bauer - Prints the time from 00:00 to 23:59
  */
void jack_bauer(void)
{
	int hours, minutes;

	while (hours < 24)
	{
		while (minutes < 60)
		{
			_putchar('0' + hours / 10);
			_putchar('0' + hours % 10);
			_putchar(':');
			_putchar('0' + minutes / 10);
			_putchar('0' + minutes % 10);
			_putchar('\n');
			minutes++;
		}
		minutes = 0;
		hours++;
	}
}
