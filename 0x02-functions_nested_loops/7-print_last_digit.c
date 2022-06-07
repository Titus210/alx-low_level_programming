#include "main.h"
/**
 *print_last_digit - prints the last digit of a number.
 *@m: integer declaration
 * Return: value of last digit
 */
int print_last_digit(int m)
{
	int n;

	if (m < 0)
		m = -m;
	n = m % 10;
	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (0);
}

