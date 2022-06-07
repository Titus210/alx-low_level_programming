#include "main.h"
/**
 *print_last_digit - prints the last digit of a number.
 *@m: integer declaration
 * Return: value of last digit
 */
int print_last_digit(int m)
{
	int n;

	if (m < 10)
	{
		n = -1 * (m % 10);
	}
	else
	{
		n = m % 10;
	}
	_putchar((n % 10) + '0');
	return (n % 10);
}
