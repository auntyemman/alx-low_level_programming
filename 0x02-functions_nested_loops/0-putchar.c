#include <stdio.h>
/**
 * Main: The entry point of C program
 * Description: The program prints _putchar
 *
 * Return: 0 means successs
 */

int main(void)
{
	char c[9] = "_putchar";
	int i;

	for (i=0; i<9; i++)
	{
		printf("%c", c[i]);
	}
	return (0);
}
