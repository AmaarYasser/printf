#include "main.h"

/**
 * print_binary - ...
 * @ptr: ...
 * Return: ...
 */

int print_binary(va_list ptr)
{
	int charCount, index, i;
	unsigned int number;
	char str[32];

	/** Maximum length of a 32-bit binary representation. */

	number = va_arg(ptr, unsigned int);
	charCount = 0, index = 0;

	/** checks if number is 0 then return 1 and skipe rest of code */

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	while (number > 0)
	{
		str[index++] = '0' + (number & 1);

		/** perform a bitwise right shift operation by 1 */

		number >>= 1;
	}
	i = index - 1;
	while (i >= 0)
	{
		_putchar(str[i]);
		charCount++;
		i--;
	}
}
