#include "main.h"

/**
 * putni - prints the integer
 * @list: list of type va_list
 * @print_sign: sign
 * Return: length of the integer
 */

int putni(va_list list, int print_sign)
{
	int num;
	int len;
	int a;
	int b;
	char buffer[10] = {0};

	num = va_arg(list, int);
	len = 0;
	a = 0;
	b = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	else if (num < 0)
	{
		if (print_sign)

		_putchar('-');
		num = abs(num);
		len++;
	}

	while (num != 0)
	{
		buffer[a++] = (num % 10) + '0';
		num /= 10;
	}
	len += a;
	for (b = a - 1; b >= 0; b--)
		_putchar(buffer[b]);

	return (len);
}
