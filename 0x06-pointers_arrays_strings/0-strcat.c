#include "main.h"
/**
 * _strcat - concatenates 2 strings.
 *  @dest: string with concatenation
 *  @src: string to be concatenated
 *  Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int lengD, lengS;

	lengD = 0;
	lengS = 0;
	while (*(dest + lengD) != '\0')
		lengD++;
	while (*(src + lengS) != '\0' && lengD < 97)
	{
		*(dest + lengD) = *(src + lengS);
		lengD++;
		lengS++;
	}
	*(dest + lengD) = '\0';
	return (dest);
}
