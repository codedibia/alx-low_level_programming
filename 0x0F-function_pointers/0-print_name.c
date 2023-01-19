#include"function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function that prints a name.
 *
 * @f: function pointer
 * @name: pointer to char
 *
 * Return: Return name 
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
