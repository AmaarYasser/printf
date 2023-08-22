#include "main.h"

/**
 * print_rot13_string - ....
 * @ptr: ...
 * Return: ...
 */

int print_rot13_string(va_list ptr)
{
	char *str;
	char base;
	int len = 0, i = 0;

	str = va_arg(ptr, char *);

	/** check if null string */

	if (!str)
		return (_puts(NULL_STRING));

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			base = (str[i] >= 'a' && str[i] <= 'z') ? 'a' : 'A';
			_putchar((str[i] - base + 13) % 26 + base);
		}
		else
			_putchar(str[i]);
		i++;
		len++;
	}
	return (len);
}
