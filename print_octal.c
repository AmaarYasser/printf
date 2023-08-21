#include "main.h"

/**
 * print_octal - ...
 * @ptr: ...
 * Return: ...
*/

int print_octal(va_list ptr)
{
	unsigned int number;
	int charCount, i, index;
	char buffer[12];

	number = va_arg(ptr, unsigned int);

	/** initialize */

	charCount = 0;
	index = 0;

	/** check if 0 */

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}

	while (number > 0)
	{
		buffer[index++] = '0' + (number % 8);
		number = number / 8;
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
