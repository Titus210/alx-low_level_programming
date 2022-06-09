#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks if digit
 * @c: Integer input
 * Return: 1 is digit else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
