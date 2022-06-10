#include "main.h"
/**
 *more_numbers - prints 10 times the numbers, from 0 to 14
 *Return: void
 */
void more_numbers(void)
{
	int number, i, j, k;

	for (k = 1; k <= 10; k++)
	{
		for (number = 0; number <= 14; number++)
		{
			j = number / 10;
			i = number % 10;
			if (number > 9)
				_putchar(j + '0');
			_putchar(i + '0');

		}
		_putchar('\n');
	}
}
