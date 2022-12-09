#include <stdio.h>

/**
 * main - prints alpha in lower and upper case
 * Return: Always 0
 */
int main(void)
{

	char c;
	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
