#include "main.h"
/**
 * swap_int - swaps two integer
 * @a: Integer pointer
 * @b: Integer pointer
 * Return: Swapped value
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
