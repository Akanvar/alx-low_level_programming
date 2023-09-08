#include <stdio.h>
/**
 * main - A C program that prints the size of various data types.
 * Return: 0 (Success)
 */
int main(void)
{
char charType;
int intType;
long int longintType;
long long int longlongintType;
float floatType;
printf("Size of a char: %c byte(s)\n", sizeof(charType);
printf("Size of an int: %d byte(s)\n", sizeof(intType);
printf("Size of a long int: %ld byte(s)\n", sizeof(longintType);
printf("Size of a long long int: %lld byte(s)\n", sizeof(longlongintType);
printf("Size of a float: %f byte(s)", sizeof(floatType);
return (0);
}
