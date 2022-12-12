#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description:  Complete the source code in order to print the last digit of
 * the number stored in the variable
 *
 * Return: Always 0
 */


int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
 /* Print the last digit of n is greater than 5 */
printf("Last digit of %d and is greater than 5\n", n);
}
else if (n == 0)
{
    /* Print the last digit of n is 0 */
printf("Last digit of %d and is 0\n", n);
}
else if ((n == 6) && (n != 0))
{
    /* Print the last digit of n is 6 not 0 */
printf("Last digit of %d and is less than 6 and not 0\n", n);
}
return (0);
}
