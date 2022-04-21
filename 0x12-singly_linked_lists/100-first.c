#include <stdio.h>


void mole(void) __attribute__ ((constructor));
/**
 * premain - run before main
 */

void mole(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
