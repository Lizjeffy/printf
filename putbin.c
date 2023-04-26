#include "main.h"

/**
 * putbin - prints a binary number
 * @val: arguments
 * Return: c
 */
int putbin(va_list val)
{
	int flg = 0;
	int c = 0;
	int i, a = 1, b;
	unsigned int new_val = va_arg(val, unsigned int);
	unsigned int p;

	i = 0;

	while (i < 32)
	{
		p = ((a << (31 - i)) & new_val);
		if (p >> (31 - i))
			flg = 1;
		if (flg)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			c++;
		}
	}
	i++;
	if (c == 0)
	{
		c++;
		_putchar('0');
	}
	return (c);
}
