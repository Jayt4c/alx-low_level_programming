#include "main.h"

/**
 * _strspn - calculate the length of string with accepted characters
 * @string: analyzed string
 * @accepted: accepted characters
 *
 * Return:pointer to destination memory
 */
unsigned int _strspn(char *string, char *accepted)
{
	unsigned int string_index, accepted_index, found;

	for (string_index = 0; string[string_index] != '\0'; string_index++)
	{
		found = 0;
		for (accepted_index = 0; accepted[accepted_index] != '\0'; accepted_index++)
		{
			if (string[string_index] == accepted[accepted_index])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
			break;
	}
	return (string_index);
}
