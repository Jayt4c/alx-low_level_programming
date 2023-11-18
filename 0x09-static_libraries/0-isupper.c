#include "main.h"

/**
 * _isupper - Checks if a character is uppercase.
 * @c: Input character.
 *
 * Return: 1 if it's uppercase, 0 if not.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

