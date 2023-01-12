#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints the number of arguments passed into it.
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	printf ("The number of arguments passed into main is %d\n", argc);
		return (0);
}
