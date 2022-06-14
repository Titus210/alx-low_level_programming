#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string input
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;

	while (s[i] != 0)
		i++;
	while (i)
	{
		_putchar(s[--i]);
	}
	_putchar('\n');
}
