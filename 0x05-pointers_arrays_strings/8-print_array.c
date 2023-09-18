#include "main.h"
/**
 * print_array - print n elements of an array of integers and a new line
 * @a: array name
 * @n: number of elements of the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
		printf("%d, ", a[i]);
	if (i == (n - 1))
		printf("%d\n", a[n - 1]);
}
