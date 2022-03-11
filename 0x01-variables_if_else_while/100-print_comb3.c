#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all possible different combination of two
 * digits but not 01 and 01 which is 18 on base ten.
 * Return: 0
 */
int main(void)
{
	int c;
	int d = 1;

	while (d < 10)
	{
		c = 1;
		while (c < 10)
		{

			putchar('0' + d);
			putchar('0' + c);

			if (c + d != 18)
			{
				putchar(',');
				putchar(' ');
			}
			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
