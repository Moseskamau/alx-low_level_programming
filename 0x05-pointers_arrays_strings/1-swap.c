#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers
 * @a: First integer to swap
 * @b: Second integer to swap
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* The function that swaps the values of two integers */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
