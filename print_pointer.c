#include "main.h"

/**
 * print_pointer - ...
 * @ptr: ...
 * Return: ...
 */

int print_pointer(va_list ptr)
{
	int i = 0, charCount;
	void *address;
	char *s = NULL_STRING;
	char *hex_address;

	address = va_arg(ptr, void *);

	/** handle NULL pointer */
	if (!address)
	{
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			i++;
		}
		return (i);
	}

	_putchar('0');
	_putchar('x');

	/** Convert the pointer address to hexadecimal */

	hex_address = to_hexa((unsigned long int)address);
	charCount = _puts(hex_address);

	/** +2 for "0x" */

	return (charCount + 2);
}
