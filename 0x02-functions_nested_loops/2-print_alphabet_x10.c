#include "main.h"

/**
 * print_alphabet_x10 -> prints alpha 10 lines
 */

void print_alphabet_x10(void)

{
	int j;

	int l;

	for (l = 0; l <= 9; l++)
	{
	for (j = 'a'; j <= 'z'; j++)
		_putchar(j);
		_putchar('\n');
	}
}
