#include "main.h"

/**
 * print_charcter - ...
 * @ptr: ...
 * Return: ...
 *
*/

int print_charcter(va_list ptr)
{
	char ch;

	ch = va_arg(ptr, int);
	_putchar(ch);

	return (1);
}
