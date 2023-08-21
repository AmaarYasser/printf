#include "main.h"

/**
 * print_decimal - ...
 * @ptr: ...
 * Return: ...
*/

int print_decimal(va_list ptr)
{
	unsigned int n;
	int myValue, len = 0, divisor = 1;

	myValue  = va_arg(ptr, int);
	len += (myValue < 0) ? (_putchar('-'), n = -myValue) : (n = myValue);
	while (n / divisor > 9)
		divisor *= 10;
	while (divisor != 0)
	{
		len += _putchar('0' + n / divisor);
		n %= divisor;
		divisor /= 10;
	}
	return (len);
}
