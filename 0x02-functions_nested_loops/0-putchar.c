#include "main.h"

/**
 * main - prints _putchar and a new line
 *
 * Return: Always 0
 *
 */

int main(void)

{
	int num[] = {95, 112, 117, 116, 99, 104, 97, 114};

	int index, size;

	size = sizeof(num) / sizeof(num[index]);

	for (index = 0; index < size; index++)
	{
		_putchar(num[index]);
	}
	_putchar('\n');
	return (0);
}
