#include "main.h"
/*
 * _isalpha - Prints number if upper or lower
 *  @c: An input
 *  Return: 1 if lower or upper otherwhise 0
 */
int _isalpha(int c)
{
	char lowercase, uppercase;
	int letter = 0;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
		{
			if (c == lowercase || c == uppercase)
			{
				letter = 1;
			}
		}
	}
	return (letter);
}
