#include "main.h"

/**
 * cap_string - Capitalize all words of a string.
 * @str: The string to be capitalized.
 * Return: A pointer to be the changed string.
 */

char *cap_string(char *str)
{
	int index = 0;
	
	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (str[index -1] == ' ' || str [index -1
