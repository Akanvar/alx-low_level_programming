#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: character to initialize array with
 * Return: character pointer
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int n;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < size; n++)
	{
		array[n] = c;
	}
	return (array);
}
