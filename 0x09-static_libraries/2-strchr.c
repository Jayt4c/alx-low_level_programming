#include "main.h"

/**
 * _strchr - Locate character in a string.
 * @s: Source string.
 * @c: Character to find.
 *
 * Return: The string from the character found.
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}

