#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: count argument
 * @argv: arguments
 * Return: Always success
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%i\n", argc - 1);
	return (0);
}
