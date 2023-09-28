#include "main.h"
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: integer whose square root is to be determined
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	return (_sqrt_recursion_h(n, 2));
}

/**
 * _sqrt_recursion_h - recurses to find natural square root
 * @n: number to calculate square root of
 * @i: iterator
 * Return: integer value of resulting sqaure root
 */
int _sqrt_recursion_h(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion_h(n, (i + 1)));
}
