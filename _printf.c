#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 *
 * @format: character string composed of zero or more directives
 *
 * Return: number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char c;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					c = va_arg(args, int);
					write(1, &c, 1);
					count++;
					break;
				case 's':
					count += _puts(va_arg(args, char *));
					break;
				case '%':
					write(1, "%", 1);
					count++;
					break;
				default:
					break;
			}
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

/**
 * _puts - writes a string to stdout
 * @str: string to write
 *
 * Return: number of characters printed
 */
int _puts(char *str)
{
	int count = 0;

	while (*str)
	{
		write(1, str++, 1);
		count++;
	}
	return (count);
}

