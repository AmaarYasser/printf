#include "main.h"

/**
 * print_reversed_string - ...
 * @ptr: ...
 * Return: ...
 */

int print_reversed_string(va_list ptr)
{
	char *str;
	int len, i;

	str = va_arg(ptr, char *);

	/** check if null string */

	if (!str)
		str = NULL_STRING;

	len = _strlen(str);
	i = len - 1;


	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}

	return (len);
}
