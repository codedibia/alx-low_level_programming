#include "main.h"
#include <stdio.h>
/**
 * _strcpy -  copies the string
 *
 * @dest: destination to copy
 * @src: source to copy from
 *
 * Return: Returns character
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
