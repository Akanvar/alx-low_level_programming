#include <stdlib.h>
/**
 * *_memset -  fills the first n bytes of the memory area
 * @s: pointer to memory location
 * @b: input character
 * @n: integer byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while
		(n > 0) {
			s[i] = b;
			n--;
			i++;
	}
	return (s);
}
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
