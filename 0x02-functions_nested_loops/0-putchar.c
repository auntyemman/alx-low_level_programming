#include "main.h"
/**
 * main - Prints Holberton
 * print_putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c[10] = "Holberton";
	int i = 0;

	while (i < 9)
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
