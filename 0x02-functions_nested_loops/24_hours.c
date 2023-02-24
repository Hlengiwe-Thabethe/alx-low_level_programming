#include "main.h"

/**
 * jack_bauer - prints 24 hours
 */

void jack_bauer(void)

{
	int i;

	int j;

	for
	{
		(i = 0; i < 24; i++)

		for
		{
			(j = 0; i < 60; j++)
			if
				(i < 10)
				{
				_putchar('0');
				_putchar(i + '0');
				}
			if
				(j < 10)
				{
				_putchar(':');
				_putchar('0');
				_putchar(j + '0');
				}
			else if
				(j > 10)
				{
				_putchar(':');
				-putchar((j / '10') + '0');
				_putchar((j % '10') + '0');
				}
		}
	}
}
