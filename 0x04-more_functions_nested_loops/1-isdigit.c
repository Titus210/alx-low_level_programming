#include "main.h"
/**
 * _isdigit - checks if digit
 * @c: Integer input
 * Return: 1 is digit else 0
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
			break;
		}
	}
	return (digit);
}
