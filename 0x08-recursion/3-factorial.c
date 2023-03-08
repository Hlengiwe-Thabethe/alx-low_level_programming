#include "main.h"
#include <stdio.h>

/**
 * factorial - calculates the factorial number
 * @n: number to calculate the factorial of
 * Return: int value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
