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
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');

			/** To ensure 2-character representation */

			if (str[i] < 16)
				_putchar('0');
			_printf("%X", str[i]);
		}
		else
			_putchar(str[i]);
	}

	return (len);
}
