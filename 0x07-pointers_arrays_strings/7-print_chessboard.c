#include "main.h"

/**
 * print_chessboard - entry point
 * @a: array
 * Return: Always successs
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int n;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 8; n++)
		{
			putchar(a[i][n]);
		}
		putchar('\n');
	}
}
