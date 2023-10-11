#include <stdio.h>
#include "main.h"
/**
 * _isalpha - returns 1 if c is a letter
 * @c - int to be tested
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
