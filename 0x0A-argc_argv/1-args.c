#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	/** since main function can only take zero or two parameters
	 * we have to void the argv since we are not using it
	 */
	(void)argv;

	printf("%i\n", argc - 1);
	return (0);
}
