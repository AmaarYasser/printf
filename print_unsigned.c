#include "main.h"

/**
 * print_unsigned - ...
 * @ptr: ...
 * Return: ...
*/

int print_unsigned(va_list ptr)
{
	unsigned int number;
	int charCount, i, index;
	char buffer[12];

	number = va_arg(ptr, unsigned int);

	/** initialize */

	charCount = 0;
	index = 0;

	/** check if zero */

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}

	while (number > 0)
	{
		buffer[index++] = '0' + (number % 10);
		number = number / 10;
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
