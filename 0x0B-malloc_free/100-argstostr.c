#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int x, y, i = 0, j = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			i++;
	}
	i = i + ac;

	str = malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
	for (y = 0; av[x][y]; y++)
	{
		str[j] = av[x][y];
		j++;
	}
	if (str[j] == '\0')
	{
		str[j++] = '\n';
	}
	}
	return (str);
}

