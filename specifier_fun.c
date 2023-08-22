#include "main.h"

/**
 * specifier_fun - ...
 *
 * Return: ...
*/

specifiers_format *specifier_fun(void)
{
	static specifiers_format specifier[] = {
		{"c", print_charcter}, {"s", print_string},
		{"%", print_percent}, {"d", print_decimal},
		{"i", print_decimal}, {"b", print_binary},
		{"u", print_unsigned}, {"o", print_octal},
		{"x", print_hex_lower_x}, {"X", print_hex_upper_X},
		{"S", print_custom_string}, {"p", print_pointer},
		{"r", print_reversed_string}, {"R", print_rot13_string},
		{NULL, NULL}
	};
	return (specifier);
}
