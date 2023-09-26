#include "main.h"
/**
 * *_memcpy -  copies memory area
 * @dest: memory destination
 * @src: memery source
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, j = n;

	for (i = 0; i < j--; i++)
		dest[i] = src[i];
	return (dest);
}
