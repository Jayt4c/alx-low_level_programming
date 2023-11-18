#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including '\0'.
 * @dest: Pointer.
 * @src: Pointer.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while ((*dest++ = *src++))
		;

	return start;
}

