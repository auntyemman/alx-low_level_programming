#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int base10 = 0;

	while (base10 < 10)
	{
		putchar(48 + base10);
		base10++;
	}

	putchar('\n');
	return (0);
}
