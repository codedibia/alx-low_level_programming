#include <stdio.h>
/**
 * main - main function
 *
 *
 * Return: a number
 */
int main(void)
{
	int i;

	i = 0;

	for (i = 1; i < 100;)
		i++;
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}

		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
