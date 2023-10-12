#include "main.h"
#include <stdio.h>
/**
 * _isupper - check for upper
 *
 * @c: input char
 *
 * Return: 1 if uppercase, 0 if otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
