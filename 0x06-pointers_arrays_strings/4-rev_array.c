#include "main.h"
/**
 * reverse_array - reverse content of int array
 * @a: input array
 * @n: number of array elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
