#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Return: Always (0)
 */

int main(void)
{
	int x;
	char lower;

	for (x = '1'; x <= '9'; x++)
	{
		putchar(x);
	}

	for (lower = 'a'; lower <= 'f'; lower++)
	{
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
