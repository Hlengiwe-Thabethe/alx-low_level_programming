#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: count argument
 * @argv: arguments
 * Return: Always success
 */

int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (0);
}
