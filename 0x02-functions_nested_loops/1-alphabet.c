#include <stdio.h>
#include "main.h"
/**
 * main - print alphabet in lowercase
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char lower_letter;
	for (lower_letter = 'a'; lower_letter <= 'z'; lower_letter++)
		_putchar(lower_letter);
	_putchar('\n');

	return (0);i
}
