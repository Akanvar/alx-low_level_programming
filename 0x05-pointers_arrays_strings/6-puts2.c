#include "main.h"
/**
 * puts2 -  prints every other character of a string
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int o, t = 0, longi = 0;

	char *y = str;

	while
		(*y != '\0') {
			y++;
			longi++;
		}
	t = longi - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
			_putchar(str[o]);
	}
	_putchar('\n');
}
