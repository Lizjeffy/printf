#include "main.h"

/**
 * _printf - produce output
 * @format: character
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int num = 0;
	va_list val;

	va_start(val, format);
	num = num + process_format(format, p, &val);
	va_end(val);

	return (num);
}
