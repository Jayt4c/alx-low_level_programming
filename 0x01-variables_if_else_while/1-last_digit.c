#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Return int and string (SUCCESS)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d ", n);
	if (n > 5)
	{
		printf("and is greater than 5\n");
	} else if (n == 0)
	{
		printf("and is 0");
	} else
	{
		printf("and is less than 6 and not 0");
	}
}
