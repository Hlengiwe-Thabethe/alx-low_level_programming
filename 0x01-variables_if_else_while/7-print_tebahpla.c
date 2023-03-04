#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Return: Always (0)
 */

int main(void)
{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower--)
	{
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
