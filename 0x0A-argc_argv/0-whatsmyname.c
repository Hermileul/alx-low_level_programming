#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the file folowed by a new line
 * @argc: argument count
 * @argv: arguments passed to main as an array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	print("%s\n", argv[0]);

	return (0);
}
