#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - entry point
 * @s: the string to print
 * Return: Always success
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	s++;
	_puts_recursion(s);
}
