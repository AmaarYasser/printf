#include "main.h"

/**
 * print_string - ...
 * @ptr: ...
 * Return: ...
 *
*/

int print_string(va_list ptr)
{
	int len, i;
	char *str;

	len = 0;
	str = va_arg(ptr, char *);

	if (!str)
		str = NULL_STRING;

	len = _strlen(str);
	for (i = 0; i < len; i++)
		_putchar(str[i]);

	return (len);
}
