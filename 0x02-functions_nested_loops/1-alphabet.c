#include "main.h"

/**
 * main - prints the alphabet, in lowercase
 *
 * Description: Prints the alphabet in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)

{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
