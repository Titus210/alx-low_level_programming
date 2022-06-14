#include "main.h"
#include <stdio.h>
/**
 * main - swaps integer
 * Return: value of swapped integer
 */
int main(void)
{
	int a, b, swap;

	a = 10;
	b = 20;
	printf("a = %d, b = %d", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}
