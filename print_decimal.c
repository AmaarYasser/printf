#include "main.h"

/**
 * print_decimal - ...
 * @ptr: ...
 * Return: ...
*/

int print_decimal(va_list ptr)
{
	int number, index, digit, charCount, i;
	char tmp[12];

	number = va_arg(ptr, int);
	charCount = 0, index = 0;

	/**  Handle negative numbers */

	if (number < 0)
	{
		_putchar('-');
		number = -number;
		charCount++;
	}

	/** Convert number to string - Maximum length of an int + sign => 12 */

	if (number != 0)
	{
		while (number > 0)
		{
			digit = number % 10;
			tmp[index++] = '0' + digit;
			number /= 10;
		}
	}
	else
		tmp[index++] = '0';

	/** Print the number in reverse order */

	i = index - 1;
	while (i >= 0)
	{
		_putchar(tmp[i]);
		i--;
		charCount++;
	}
	return (charCount);
}
