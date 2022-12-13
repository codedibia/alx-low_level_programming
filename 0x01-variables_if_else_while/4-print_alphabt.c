#include <stdio.h>
/**
 * main - entry point
 *
 * Description: a program that prints the alphabet in lowercase, followed by a
 * new line.
 *
 *Return: alway 0
 *
 */
int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)

	{
	if (abc == 'q' || abc == 'e')

	{
	continue;
	}

	putchar(abc);

	}

	putchar('\n');
	return (0);
}
