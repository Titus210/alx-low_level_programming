#include "main.h"
#include <stdio.h>
/**
 * main - returns the length of a string.
 * Return: 0
 */
int main(void)
{
	char *str;
	int length;

	str = "Titus";
	length = _strlen(str);
	printf("%d\n", length);
	return (0);
}
