#include "main.h"
/**
 * rev_string -  reverses a string.
 * @s: string input
 * Return: nothing
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char rev;

	while (s[len] != '\0')
		len++;
	while (i < len--)
	{
		rev = s[i];
		s[i++] = s[len];
		s[len] = rev;
	}
}
