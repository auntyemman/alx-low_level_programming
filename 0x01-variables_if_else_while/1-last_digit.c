#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *  Description: Get a random number and check its last digit, compare it with 5
 * Return: Always 0, meaning success
 */
int main(void)
{
	int n;
	int mole;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mole = n % 10;

	if (mole > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, mole);
	else if (mole == 0)
		printf("Last digit of %d is %d and is 0\n", n, mole);
	else (mole < 6)
		printf("Last digit of %d is %d and is less than 6 and 0\n", n, mole);
	return (0);
}
