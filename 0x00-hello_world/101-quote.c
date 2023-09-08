#include <unistd.h>
/**
 * main - A C program that prints error message to the standard error.
 * Return: 1 (error encountered)
 */
int main(void)
{
write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar, \
2015-10-19\n",
sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n") - 1);
return (1);
}
