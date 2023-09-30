#include <stdio.h>
/**
 * main - program that prints its name
 * @argc: number of arguments to main
 * @argv: array of characters
 * Return: 0 Always
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
