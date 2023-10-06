#include <stdio.h>
/**
 * main - print single digit numbers from 0
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}

