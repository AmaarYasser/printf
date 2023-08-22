#include "main.h"

/**
 * print_custom_string - ...
 * @ptr: ...
 * Return: ...
 */

int print_custom_string(va_list ptr)
{
	char *str, *res;
	int len = 0;

	str = va_arg(ptr, char *);
	if (!str)
		return (_puts(NULL_STRING));
	while (*str)
	{
		if ((*str > 0 && *str < 32) || *str >= 127)
		{
			res = to_hexa(*str);
			len += _puts("\\x");

			if (!res[1])
				len += _putchar('0');
			len += _puts(res);
		}
		else
			len += _putchar(*str);
		str++;
	}
	return (len);
}

/**
 * to_hexa - ...
 * @num: ...
 * Return: ...
 */

char *to_hexa(unsigned long int num)
{
	char *ptr;
	static char *seq;
	static char buffer[50];
	int base = 16;

	/** initialization */

	seq = "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';

	while (num)
	{
		*--ptr = seq[num % base];
		num = num / base;
	}
	return (ptr);
}
