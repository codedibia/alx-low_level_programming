#include "main.h"
#include <stddef.h>

/**
 * _strchr - a function that locates a character in a string.
 *
 * @s: string to br searched
 * @c: character to be searched for
 *
 * Return: Returns pointer
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}

		i++;
	}
	if (c == '\0')
	{
		return (s + i);
	}
	return (NULL);
}
