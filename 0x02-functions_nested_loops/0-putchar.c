#include <stdio.h>
/**
 * main -  The entry point of C program
 * Description: The program prints _putchar
 * using loops
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		printf("%c", c[i]);
	}
	printf("\n");
	return (0);
}
