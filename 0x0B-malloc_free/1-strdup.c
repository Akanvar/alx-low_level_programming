#include <stdlib.h>
#include "main.h"
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: input string
 * Return: pointer to str
 */
char *_strdup(char *str)
{
	char *ptrStr;

	int i, x;

	if (str == NULL)
		return (NULL);

	x = 0;
	while
		(str[x] != '\0') {
			x++;
	}

	ptrStr = malloc(x * sizeof(char) + 1);
	if (ptrStr == NULL)
		return (0);

	i = 0;
	while
		(str[i] != '\0') {
			ptrStr[i] = str[i];
			i++;
	}
	ptrStr[i] = '\0';

	return (ptrStr);
}
