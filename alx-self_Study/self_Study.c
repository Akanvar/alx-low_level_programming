#include <stdio.h>
/**
 * main - entry point
 * Return: 0 always
 */
int main(void)
{
	char lower_Case, upper_Case;

	for (lower_Case = 'a'; lower_Case <= 'z'; lower_Case++)
		putchar(lower_Case);
	for (upper_Case = 'A'; upper_Case <= 'Z'; upper_Case++)
		putchar(upper_Case);
	putchar('\n');
	return 0;
}
