#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: string whose lenght is returned
 *
 * Return: returns length
 *
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + 1) != '\0'; i++)
	{}
	return (i);
}
