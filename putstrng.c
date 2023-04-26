#include "main.h"

/**
 * putstrng - prints the string
 * @list: the list
 * Return: len of string
*/
int putstrng(va_list list)
{
	int k, len;
	char *char_c;

	char_c = va_arg(list, char *);
	if (char_c != NULL)
	{
		len = strlen(char_c);
		for (k = 0; k < len; k++)
		{
			_putchar(char_c[k]);
		}
	}
	else
	{
		char_c = "(null)";
		len = strlen(char_c);
		for (k = 0; k < len; k++)
		{
			_putchar(char_c[k]);
		}
	}
	return (len);
}
