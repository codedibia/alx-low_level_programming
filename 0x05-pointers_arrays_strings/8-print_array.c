#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 *
 * @a: - array name
 * @n: - number of elements inn the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
		printf("\n");
}
