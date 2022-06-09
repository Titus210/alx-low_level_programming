#include "main.h"
/**
 * _isdigit - function that checks for a digit
 * @c: Input integer
 * Return: 1 if digit else 0
 */
int _isdigit(int c)
{
	int i = 0;
	int digit = 0;

	for (; i < 10; i++)
	{
		if (c == i)
		{
			digit = 1;
		}
	}
	return (digit)
}
