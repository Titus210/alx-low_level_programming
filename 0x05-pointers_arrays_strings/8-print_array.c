#include "main.h"
#include <stdio.h>
/**
 * print_array - print the n elements of an array
 * @a: tested  array
 *  @n: number of elements
 *  Return: always 0.
 */
void print_array(int *a, int n)
{
	int i, l;

	l = n - 1;
	for (i = 0; i <= l; i++)
	{
		printf("%d", a[i]);
		if (i < l)
		{
			printf(", ");
		}
	}
	printf("\n");
}
