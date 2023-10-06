#include <stdio.h>
/**
 * main - print alphabet in lower case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (alp != 'e' && alp != 'q')
		{
			putchar(alp[i]);
		}
	}

	putchar('\n');
	return (0);
}
