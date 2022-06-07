#include "main.h"
/**
 *print_last_digit - prints the last digit of a number.
 *Return: value of last digit
 */
int print_last_digit(int)
{
	int n , m;

	if (m < 10)
	{
		n = -1 * (m % 10);
	}
	else
	{
		m = r % 10;
	}
	_putchar((n % 10) + '0');
	return (n % 10);
}
