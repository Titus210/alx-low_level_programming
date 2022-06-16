#include "main.h"
/**
 * _strncat - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int lengD;
	int lengS;

	lengD = 0;
	lengS = 0;

	while (*(dest + lengD) != '\0')
		lengD++;
	while (*(src + lengS) != '\0' && lengD < 97 && lengS < n)
	{
		*(dest + lengD) = *(src + lengS);
		lengD++;
		lengS++;
	}
	*(dest + lengD) = '\0';
	return (dest);
}
