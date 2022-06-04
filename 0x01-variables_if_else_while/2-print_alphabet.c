#include <stdio.h>
/**
 * main- program that prints the alphabet in lowercase, followed by a new line.
 * Return 0 if succesfull
 */
int main(void)
{
	char lt;

	for (lt = 'a'; lt <= 'z'; lt++)
	{
		putchar(lt);
	}
	putchar('\n');
	return (0);
}
