#include "main.h"

/**
 * _printf - produce output
 * @format: character
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int num = 0, len = 0;
	va_list val;

	va_start(val, format);

	if (format == NULL)
		return (-1);
	while (format[num])
	{
		if (format[num] == '%')
		{
			num++;
			len = len + format_handler(format[num], val);
		}
		else
			len = len + _putchar(format[num]);
		num++;
	}

	va_end(val);

	return (len);
}

/**
 * format_handler - to handle format directives
 * @format: format character
 * @val: va_list argument
 * Return: number of character to be printed
 */

int format_handler(char format, va_list val)
{
	int len = 0;
	int op = 1;

	if (format == 'c')
		len = len + _putchar(va_arg(val, int);
	else if (format == 'x')
		len = len + print_hex3(op, va_arg(val, unsigned int), 0);
	else if (format == 'X')
		len = len + print_hex3(op, va_arg(val, unsigned int), 1);
	else if (format == 'o')
		len = len + print_unsi(op, va_arg(val, unsigned int), 8);
	else if (format == 's')
		len = len + print_str(va_arg(val, char *));
	else if (format == 'S')
		len = len + print_S(va_arg(val, char *));
	else if (format == '%')
		len = len + _putchar('%');
	else if (format == 'd')
		len = len + print_number(va_arg(val, int));
	else if (format == 'i')
		len = len + print_number(va_arg(val, int));
	else if (format == 'b')
		len = len + print_bin(va_arg(val, unsigned long int));
	else if (format == 'p')
		len = len + print_pointer(va_arg(val, void *));
	else if (format == 'u')
		len = len + print_unsig(va_arg(val, unsigned int), 10);
	else
		len = len + _putchar('%'), len = len + _putchar(format);
	return (len);
}
