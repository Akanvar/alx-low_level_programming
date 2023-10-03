#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;

	int len_s1, len_s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = 0;
	while
		(s1[len_s1] != '\0') {
			len_s1++;
	}
	len_s2 = 0;
	while
		(s2[len_s2] != '\0') {
			len_s2++;
	}

	ptr = malloc((len_s1 + len_s2) * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);

	len_s1 = 0;
	while
		(s1[len_s1] != '\0') {
			ptr[len_s1] = s1[len_s1];
			len_s1++;
	}
	len_s2 = 0;
	while
		(s2[len_s2] != '\0') {
			ptr[len_s1] = s2[len_s2];
			len_s1++;
			len_s2++;
	}
	ptr[len_s1] = '\0';

	return (ptr);
}
