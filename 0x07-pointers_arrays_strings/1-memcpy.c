#include "main.h"

/**
  * copy memory area
  * @destination:pointer to return
  * @source: source memory area
  * @no_of_byte: bytes from memory area to copy
  *
  * Return: the pointer to destination.
  */
char *_memcpy(char *destination, char *source, unsigned int no_of_byte)
{
	unsigned int i;

	for (i = 0; i < no_of_byte; i++)
	{
		destination[i] = source[i];
	}

	return (destination);
}
