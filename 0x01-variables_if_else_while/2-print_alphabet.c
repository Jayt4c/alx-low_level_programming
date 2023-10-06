#include <stdio.h>
/**
 * main - print alphabet in lower case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	for (char alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}

	putchar('\n');
	return (0);
}
