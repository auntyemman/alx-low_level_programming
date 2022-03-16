#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - check the code for Holberton School students.
 * function: print_alphabet
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar (c);
		c++;

	}
	_putchar ('\n');

}
