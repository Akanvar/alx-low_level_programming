#include "main.h"
/**
 *factorial - calculates factorial of integer
 * @n: integer
 * Return: n or -1 to indicate failure
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
