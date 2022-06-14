#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string input
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, length;
	char a;

	length = 0;
	while (*(s + length) != '\0')
	{
		length++;
	}
	for (i = 0; i < (length / 2); i++)
	{
		a = *(s + i);
		*(s + i) = *(s + length - i - 1);
		*(s + length - i - 1) = a;
	}
}
