#include "main.h"

/**
 * _abs - computes value of an integer
 * @n: n is an int
 *
 * Return: integer
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
