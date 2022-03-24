#include "main.h"
#include "_putchar.c"

/**
 * _strcat - function that concatenates two strings
 * @dest: an input string
 * @src: an input string
 * Return: A pointer to the result
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while(*dest != '\0')
	{
		*dest++;
	}

	while(*src != '\0')
	{
		*dest = *src;
		*dest++;
		*src++;
	}

	*dest = '\0';

	return (ptr);
}
