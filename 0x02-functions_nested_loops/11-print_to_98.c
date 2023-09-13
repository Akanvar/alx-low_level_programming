#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n:numbers to be printed
 * Return: void
 */
void print_to_98(int n)
{
	for (n = n; n <= 98; n++)
	{
		if (n != 98)
			printf("%d, ", n);
		else
			printf("%d\n", n);
	}
}
