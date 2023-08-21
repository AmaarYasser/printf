#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to get it's length
 * Return: length of string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
