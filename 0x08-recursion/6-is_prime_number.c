#include "main.h"

/**
 * comparar - function that returns the power of number
 * @n: original number
 * @y: counter to compare multiplication
 *
 * Return: square root
 */
int comparar(int n, int y)
{
	int count = 0;

	if (y <= n)
	{
		if (n % y == 0)
			count++;
		return (count + comparar(n, y + 1));
	}
	return (count);
}
