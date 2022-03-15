#include "main.h"
/**
 * main - the starting point of the program
 * Description: The program prints the alphabets in lowercase
 * followed by a new line
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;

	}
	_putchar("\n");

}
int main(void)
{
	print_alphabet();
	return (0);
}
