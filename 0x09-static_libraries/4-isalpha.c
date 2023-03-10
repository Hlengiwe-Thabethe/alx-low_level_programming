#include "main.h"

/**
 * _isalpha - cckecks for alphabetical letters
 * @c: a charcter argument
 * Return: returns 1 or 0 depending on the conditions
 */

int _isalpha(int c)

{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
}
