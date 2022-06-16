#include "main.h"
/**
 * rot13 - change letters to ROT13.
 * @s: string to check
 * Return:  String with all letters in ROT13 base.
 */
char *rot13(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
				s[i] += 13;
			else
				s[i] -= 13;
			i++;
		}
	i++;
	}
	return (s);
}
