#include "main.h"

/**
 * void print_line -  draws a straight line in the terminal
 *
 * @n: numbeer of times to print line
 *
 * Return: Always 0
 */
void print_line(int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
