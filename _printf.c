#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int prc;
	int c;
	int x;

	va_start(args, format);

	prc = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					c = va_arg(args, int);
					putchar(c);
					prc++;
					break;
				case 's':
				{
					char *str = va_arg(args, char *);
					for (x = 0; str[x] != '\0'; x++)
					{
						putchar(str[x]);
						prc++;
					}
					break;
				}
				case '%':
					putchar('%');
					prc++;
					break;
				case 'd':
					putchar('d');
					prc++;
					break;
				case 'i':
					putchar('i');
					prc++;
					break;
				default:
					putchar('%');
					putchar(*format);
					prc = prc + 2;
					break;
			}
		}
		else
		{
			putchar(*format);
			prc++;
		}
		format++;
	}
	va_end(args);
	return (prc);
}
