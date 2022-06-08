#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - all natural numbers from n to 98
 *@n: integer
 *Return: null
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			putchar("%d", n);
			if (n == 98)
				continue;
			putchar(", ");
		}
		putchar("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			putchar("%d", n);
			if (n == 98)
				continue;
			putchar(", ");
		}
		_putchar("\n");
	}
}
