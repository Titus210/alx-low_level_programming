#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - Searches for an integer
 * @array: Array to search
 * @size: size of the array
 * @cmp: Function to use for comparasion
 * Return: int to index of match, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)) != 0)
			return (i);
	}
	return (-1);
}
