#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _memset - sets memory to array
 *
 * @s: memory area to change
 * @b: value to change it to
 * @n: number of bytes to change
 *
 * Return: char value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		s[i] = b;
	}
	return (s);
}
