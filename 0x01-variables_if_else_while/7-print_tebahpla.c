#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: reverses an alphabet
 * starting from z, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char mirror = 'z';

	while (mirror >= 'a')
	{
		putchar(mirror);
		mirror--;
	}

	putchar('\n');
	return (0);
}
