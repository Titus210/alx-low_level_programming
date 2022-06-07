#include "main.h"
/**
 * is_lower -checks for lowercase character.
 * Return: 1 if lowercase else 0
 */
int main(void) 
{
	char ch;
	int lower = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'c')
		{
			lower = 1;
		}
	}
	return (lower);
}
