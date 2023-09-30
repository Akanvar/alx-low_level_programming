#include <stdio.h>
#include "main.h"
/**
 * main - program that prints its name
 * @argc: number of arguments to main
 * @argv: array of characters
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	if (argc)
		_puts(*argv);
	return (0);
}
