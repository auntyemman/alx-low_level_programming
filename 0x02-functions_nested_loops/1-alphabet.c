#include "main.h"

/**
 * print_alphabet - check the code for Holberton School students.
 * function: print_alphabet
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar (alp);
		alp++;

	}
	putchar ('\n');

}
