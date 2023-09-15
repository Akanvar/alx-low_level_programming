#include "main.h"
/**
 * print_triangle - Entry point
 * @size: size of triangle to be printed
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j < size; j++)
				_putchar(' ');
			for (j = 1; j <= i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}