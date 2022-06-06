#include <stdio.h>
/**
 * main - program that prints all the numbers of base 16 in lowercase
 * Return: 0(success)
 */
int main(void)
{
	int i = '0';
	char ch = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (ch <= 'f')
	{
		putchar(ch); 
		ch++;
	}
	putchar('\n');
	return (0);
}

