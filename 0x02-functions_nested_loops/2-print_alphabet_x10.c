#include <main.c>
#include "main.h"
/**
 *main - prints 10 times the alphabet, in lowercase,
 *Return: 0(when success)
 */
 int main(void)
{
	char ch;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
