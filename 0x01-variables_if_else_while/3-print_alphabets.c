#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: To display lower and UPPER case alphabet
 * Return: 0
 */
int main(void)
{
	char c ='a';
	char C ='A';
	if (c <= 'z')
	{
		putchar(c);
		c++;
	}
	else if (C <= 'Z')
	{
		putchar(C);
		C++;
	}

	putchar('\n');
	return (0);
}
