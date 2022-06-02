#include<stdio.h>
/**
 * main - printing size of data types
 * Return: Always 0
 */
int main(void)
{
	int a;
	char c;
	long l;
	long long ll;
	float f;
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an lond: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long: %lu byte(s)\n", (unsigned long)sizeof(ll));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return(0);
}
