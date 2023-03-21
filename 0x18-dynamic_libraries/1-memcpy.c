#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 *
 * @src: memory to be copied
 * @dest: memoryh destination
 * @n: size to be copied
 *
 * Return: Returns pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		dest[i] = src[i];
	}
	return (dest);
}
