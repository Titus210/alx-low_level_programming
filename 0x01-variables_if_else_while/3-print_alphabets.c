#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 * Return: Always 0 (Success)
*/
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)  
		putchar(c);
	putchar('\n');
	return (0);
}
