#include "main.h"
/**
 * print_last_digit - Entry point
 * @i: last digit of number to number to be printed
 * Return: the value of digit
 */
int print_last_digit(int i)
{
	int last_Digit;

	last_Digit = (i % 10);
	if (last_Digit < 0)
	{
		last_Digit = (last_Digit * -1);
	}
	_putchar(last_Digit + '0');
	return (last_Digit);
}
