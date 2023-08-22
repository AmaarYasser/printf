#include "main.h"

/**
 * _puts - ...
 * @str: ...
 * Return: ...
 */

int _puts(char *str)
{
	int len = 0, i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		len++;
	}
	return (len);
}
