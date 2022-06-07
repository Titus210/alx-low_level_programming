#include "main.h"
/**
 *print_sign - prints the sign of a number
 *@n: an input
 *Retur: 0,1,-1 depending on condition
 */
int print_sign(int n)
{
	int number;

	if (n > 1)
	{
		number = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		number = 0;
		_putchar('0');
	}
	else
	{
		number = -1;
		_putchar('-');
	}
	return (number);
}
