#include "main.h"
/**
 * print_diagonal-  draws a diagonal line on the terminal.
 * @n: number of spaces
 * Return: void
 */
void print_diagonal(int n)
{
	int row, lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= n; row++)
		{
			if (row > 1)
			{
				for (lines = 1; lines <= row - 1; lines++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
