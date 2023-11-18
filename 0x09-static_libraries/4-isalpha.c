#include "main.h"

/**
 * _isalpha - Checks for an alphabetic character.
 * @c: The input character to check.
 *
 * Return: 1 if it's an alphabetic character, 0 otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

