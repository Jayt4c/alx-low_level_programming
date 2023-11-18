#include "main.h"

/**
 * _memset - Fills memory with constant values.
 * @s: Pointer to char params.
 * @b: Constant byte.
 * @n: Byte of mem area.
 *
 * Return: Pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

