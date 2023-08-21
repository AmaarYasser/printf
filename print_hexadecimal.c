#include "main.h"

/**
 * print_hexadecimal - ...
 * @ptr: ...
 * @lowercase: ...
 * Return: ...
*/

int print_hexadecimal(va_list ptr, int lowercase)
{
	unsigned int number;
	int i, charCount, digit, index;
	char buffer[12];

	number = va_arg(ptr, unsigned int);
	charCount = 0;
	index = 0;
	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	while (number > 0)
	{
		digit = number % 16;
		(digit < 10) ? (buffer[index++] = '0' + digit) :
			(buffer[index++] = (lowercase ? 'a' : 'A') + (digit - 10));
		number /= 16;
	}

	i = index - 1;
	while (i >= 0)
	{
		_putchar(buffer[i]);
		i--;
		charCount++;
	}

	return (charCount);
}

/**
 * print_hex_upper_X - ...
 * @ptr: ...
 * Return: ...
*/

int print_hex_upper_X(va_list ptr)
{
	return (print_hexadecimal(ptr, 0));
}

/**
 * print_hex_lower_x - ...
 * @ptr: ...
 * Return: ...
*/

int print_hex_lower_x(va_list ptr)
{
	return (print_hexadecimal(ptr, 1));
}
