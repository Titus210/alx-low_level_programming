#inlude "main.h"
/**
 * get_endianness - defines pc size
 * Return: 0 big 1 little
 */
int get_endianness(void)
{
	int i = 1;

	if ((i >> 31) == 1)
		return (0);
	else
		return (i);
}
