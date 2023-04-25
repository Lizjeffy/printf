#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 * @...: var
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	check_match chk[] = {
		{"%s", putstrng}, {"%%", putper}, {"%b", putbin}, {"%c", print_char}
	};

	va_list args;
	int x;
	int index;
	int sizeof_ch;
	int length;

	va_start(args, format);
	sizeof_ch = sizeof(chk) / sizeof(chk[0]);
	length = 0;
	x = 0;
	index = 0;

	if (format == NULL)
		return (-1);
	while (format[x] != '\0')
	{
		if (format[x] == '%' && format[x + 1] == '\0')
			return (-1);
		if (format[x] == '%')
		{
			while (index < sizeof_ch)
			{
				if (format[x + 1] == *(chk[index].id + 1))
				{
					length = length + chk[index].func(args);
					x = x + 1;;
					break;
				}
			}
			index++;
			if (index == sizeof_ch)
			{
				_putchar(format[x]);
				length++;
			}
		}
		else
		{
			_putchar(*format);
			length++;
		}
	}
	x++;
	va_end(args);
	return (length);
}
