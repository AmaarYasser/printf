#include "main.h"

/**
 * _printf - ...
 * @format: ...
 * Return: count of chars
*/

int _printf(const char *format, ...)
{
	int charCount = 0, j, i = 0;

	va_list args;
	specifiers_format *specifier = specifier_fun();

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	while (format[i] && *format != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (specifier[j].specifier_id)
			{
				if (format[i] == specifier[j].specifier_id[0])
				{
					charCount += specifier[j].f(args);
					break;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			charCount++;
		}
		i++;
	}
	va_end(args);
	return (charCount);
}
