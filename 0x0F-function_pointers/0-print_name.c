#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Prints name
 *  @name: String to send to function
 *   @f: function to send string to
 *   Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
