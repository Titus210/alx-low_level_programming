#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - change the memory space of an array.
 *  @ptr: pointer to old array.
 *  @old_size: the size of ptr
 *   @new_size: new size of array
 *   Return: pointer to the new array.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *space;
	char *spacecpy, *ptrcpy;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	space = malloc(new_size);
	if (space == NULL)
		return (NULL);
	if (ptr == NULL)
		return (space);
	spacecpy = space;
	ptrcpy = ptr;
	for (i = 0; i < old_size && i < new_size; i++)
		spacecpy[i] = ptrcpy[i];
	free(ptr);
	return (space);
}
