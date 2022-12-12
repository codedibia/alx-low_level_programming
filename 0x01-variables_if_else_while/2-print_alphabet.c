#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description:  a program that prints the alphabet in lowercase, followed by a
 * new line.
 *
 * Return: Always 0
 */
int main(void)
{
	char abc;

	for (abc = 'A'; abc <= 'Z'; abc++)
	{
		char lowabc = tolower(abc);

		putchar(lowabc);
	}
	putchar('\n');
	return (0);
}
