#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints all single digit numbers of base
 * 10 starting from 0
 *
 * Return: Always 0
 */

int main(void)
{

	int n = 0;

	for (; n <= 9; n++)
		printf("%d", n);
	putchar('\n');
	return (0);
}
