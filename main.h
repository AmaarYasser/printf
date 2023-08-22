#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

#define BUFFER_SIZE 1024
#define NULL_STRING "(null)"
/**
 * _printf - format like printf
 * @format: format array string
 * Return: counter of chars
*/

int _printf(const char *format, ...);
int _putchar(char c);
int print_charcter(va_list ptr);
int print_string(va_list ptr);
int print_percent(va_list ptr);
int _strlen(char *s);
int print_decimal(va_list ptr);
int print_binary(va_list ptr);
int print_hexadecimal(va_list ptr, int lowercase);
int print_hex_upper_X(va_list ptr);
int print_hex_lower_x(va_list ptr);
int print_octal(va_list ptr);
int print_unsigned(va_list ptr);
int print_custom_string(va_list ptr);
char *to_hexa(unsigned long int num);
int _puts(char *str);
int print_custom_string(va_list ptr);
int print_pointer(va_list ptr);
int print_reversed_string(va_list ptr);
int print_rot13_string(va_list ptr);
/**
 * specifiers - struct ...
 * @specifier_id: ...
 * @f: ...
*/

typedef struct specifiers
{
	char *specifier_id;
	int (*f)(va_list);
} specifiers_format;

specifiers_format *specifier_fun(void);
#endif
