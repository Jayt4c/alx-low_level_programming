#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit of number
 * @n: the int that keeps last digit
 * Return: value of num
 */
int print_last_digit(int n)
{
	int num;
	
	if (n < 0)
		n = -n;
	
	num = n % 10;
	
	if (num < 0)
		num = -num;
	
	_putchar(num + '0');
	
	return (num);
}
