#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 *
 * @a: integer to be swapped
 * @b: integer to be swapped
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int y = *a;
	int x = *b;
	*b = y;
	*a = x;
}
