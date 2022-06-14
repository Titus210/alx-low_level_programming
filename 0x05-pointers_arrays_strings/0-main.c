#include "main.h"
#include <stdio.h>
/**
 * main - checks code
 * Return: )n success
 */
int main(void)
{
	int n;

	n = 402;
	printf("n = %d", n);
	reset_to_98(&n);
	printf("n = %d", n);
	return (0);
}

