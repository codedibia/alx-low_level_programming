#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that prints its name, followed by a new line.
 *
 * @argc: argument count
 * @argv: argument vectors
 *
 * Return - Returns name of program.
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	int i;
	for(i = 0; i < argc; ++i)
	{
		printf("The file's name is %s\n", argv[0]);
	}
	return(0);
}
