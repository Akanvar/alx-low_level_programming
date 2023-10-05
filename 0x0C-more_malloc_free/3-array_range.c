#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int n;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (n = 0; min <= max; n++)
		ptr[n] = min++;
	return (ptr);
}

