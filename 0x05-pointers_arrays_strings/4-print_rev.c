#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - prints a string, in reverse
 *
 * @s: string to be printed
 *
 * Return : Return reversed string
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
