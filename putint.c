#include "main.h"

/**
 * putint - a function that prints the integer
 * @list: list
 * Return: length of the integer
 */

int putint(va_list list)
{
	int num;
	int tmp;
	int len;
	int x;
	int outlen;
	char *c;

	num = va_arg(list, int);
	tmp = abs(num);
	len = 0, x = 0;
	outlen = 0;
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		while (tmp != 0)
		{
			tmp /= 10;
			len++;
		}
		if (num < 0)
		{
			c = malloc(sizeof(char) * (len + 2));
			if (c == NULL)
				return (0);
			sprintf(c, "%d", num);
		}
		else
		{
			c = malloc(sizeof(char) * (len + 1));
			if (c == NULL)
				return (0);
			sprintf(c, "%d", num);
		}
		for (x = 0; x < (int) strlen(c); x++)
		{
			_putchar(c[x]);
			outlen++;
		}
	}
	free(c);
	return (outlen);
}
