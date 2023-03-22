#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using pointer to function
 * @name: strin to add
 * @f: printer to function
 * Return: ALways success
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
