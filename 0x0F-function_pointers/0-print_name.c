#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - Prints name
 *  @name: String to send to function
 *   @f: function to send string to
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
