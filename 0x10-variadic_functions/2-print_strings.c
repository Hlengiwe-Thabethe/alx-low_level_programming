#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed etween the strings
 * @n: number of string passed to the function
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list c;
	unsigned int i;
	char *str;

	va_start(c, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(c, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(c);
}
