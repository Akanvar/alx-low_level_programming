#include "main.h"
#include <stdio.h>
/**
 * _abs - Entry point to print absolute values of int
 * @i: data type of operand
 * Return: Absolute value of an integer
 */
int _abs(int i)
{
	int abs_val;

	if (i < 0)
	{
		abs_val = (i * -1);
		return (abs_val);
	}
	return (i);
}
