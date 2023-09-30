#include <stdlib.h>
#include <stdio.h>
/**
 * main -  multiplies two numbers
 * @argc: argument count
 * @argv: command line arguments
 * Return: ERROR if argc < 2, else 0
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

