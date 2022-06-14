#include "main.h"
/**
 * _strlen - returns string length
 * @s: String input
 * Return: length
*/
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != 0)
	{
		length++;
	}
	return (length);
}
