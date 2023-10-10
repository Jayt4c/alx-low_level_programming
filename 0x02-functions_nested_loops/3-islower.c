#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lower case character
 * @c - char for testing
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		return (0);
}
