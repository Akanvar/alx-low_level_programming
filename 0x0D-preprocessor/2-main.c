#include <stdio.h>
/**
 * main - program that prints the name of the file it was compiled from
 * returns: Always 0
 */
int main(void)
{
	printf("%s\n", __DATE__);
	return (0);
}
