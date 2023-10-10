#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - entry point
 *
 * Description - prints all alphabets in lowercase
 * Return
 */
void print_alphabet(void)
{
	char lower_letter;

	for (lower_letter = 'a'; lower_letter <= 'z'; lower_letter++)
		_putchar(lower_letter);

	_putchar('\n');
}
