#include "main.h"
/**
 * malloc_checked- allocates memory using malloc.
 * @b: size of new memory array
 * Return: 98 if null,else memlocate
 */
void *malloc_checked(unsigned int b)
{
	void *memlocate;

	memlocate = malloc(b);
	if (memlocate == NULL)
		exit(98);
	return (memlocate);
}
