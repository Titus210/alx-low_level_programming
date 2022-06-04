#include <stdio.h>
/**
 * main- program that prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0 (Success)
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
