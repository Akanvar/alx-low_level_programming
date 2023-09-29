#include "main.h"
/**
 * _isalpha - Entry point of code
 * @c: variable to be checked
 * Return: 1 for upper/lowercase alphabet or 0 for anything else
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
