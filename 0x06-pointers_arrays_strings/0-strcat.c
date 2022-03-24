#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: an input string
 * @src: an input string
 * Return: A pointer to the result
 */

char *_strcat(char *dest, char *src)
{
	char *conc = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest++ = *src++;
		dest++;
		src++;
	}

	*conc = '\0';

	return (conc);
}
