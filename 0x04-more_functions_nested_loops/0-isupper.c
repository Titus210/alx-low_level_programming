#include "main.h"
/**
 * _isupper - Checks if letter is upper
 * @c: An integer input
 * Return: 1 if upper, else 0
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int lower = 0;

	for (;uppercase <= 'Z';uppercase++)
	{
		if (c == uppercase)
		{
			lower = 1;
			break;
		}
	}
	return (lower);
}
