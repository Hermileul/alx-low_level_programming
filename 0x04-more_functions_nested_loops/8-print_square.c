#include "main.h"

/**
 * print_square - print a square
 * @size: size of square
 * Description: can only use_putchar t print. use '#' to print square
 */
void print_square(int size)
{
	int x, y;

	y = 0;

	if (sixe < 1)
		_putchar('\n');

	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}