#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: String 1 to compare.
 * @s2: String 2 to compare.
 *
 * Return: 0 if the strings are equal, otherwise the difference between
 * the ASCII values of the first non-matching characters.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

