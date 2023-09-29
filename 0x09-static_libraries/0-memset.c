#include "main.h"
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
