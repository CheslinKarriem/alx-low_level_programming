#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swawps the value of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
