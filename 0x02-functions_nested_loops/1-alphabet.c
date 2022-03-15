#include "main.h"
/**
 * main - the starting point of the program
 * Description: The program prints the alphabets in lowercase
 * followed by a new line
 * Return: Always 0.
 */
char print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
int main(void)
{
	print_alphabet();
	return (0);
}
