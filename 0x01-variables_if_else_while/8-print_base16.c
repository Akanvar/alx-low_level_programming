#include <stdio.h>
/**
 * main - print all hexadecimals in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	char hexDigit;

	int i;

	for (i = 0; i <= 15; i++)
	{
		if (i < 10)
			hexDigit = i + '0';
		else
			hexDigit = i - 10 + 'a';
		putchar(hexDigit);
	}
	putchar('\n');
	return (0);
}
