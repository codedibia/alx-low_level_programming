#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific
 * char
 *
 * @size: size of array to be created
 * @c: char to initialize
 *
 * Return: Returns pointer or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *carr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	carr = malloc(sizeof(c) * size);

	if (carr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		carr[i] = c;

	return (carr);
}
