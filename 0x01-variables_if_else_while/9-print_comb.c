#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 * REturn:0 (successfully)
 */
int main(void)
{
	int i = '0';

	while (i <='9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}
	putchar('\n');
	return (0);
}
