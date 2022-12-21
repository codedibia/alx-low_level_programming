#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string -  reverses a string.
 *
 * @s: string to be reversed
 *
 * Return: Reversed string
 */
void rev_string(char *s)
{
	int i, len, txt;
	len = strlen(s);


	for (i = 0; i < len/2; i++)
	{
		txt = s[i];

		s[i] = s[len - i - 1];

		s[len - i - 1] = txt;
	}

}
