#include "main.h"
#include <stdlib.h>
/**
 *  create_array - Create a char array, filled with a specific character
 *   @size: Size of the array
 *    @c: char to fill array with
 *    Return: Array to pointer
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(p + i) = c;
	return (p);
}
