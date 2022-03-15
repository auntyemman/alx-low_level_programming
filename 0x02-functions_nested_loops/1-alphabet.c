#include "main.h"
/**
 * main - the starting point of the program
 * Description: The program prints the alphabets in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
