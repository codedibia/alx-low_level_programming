#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: A script that completes the source code.
 *
 * Return: Always 0
 */
int main(void)
{
/* Initialize local variable */
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
  /* Set condition for numbers*/
if (n == 0)
{
    /* Print number is zero */
printf("%d is zero\n", n);
}
else if (n < 0)
{
    /* Print number is negative */
printf("%d is negative\n", n);
}
else
{
	/* Print the number is positive*/
printf("%d is positive\n", n);
}
return (0);
}
