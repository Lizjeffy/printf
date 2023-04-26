#include "main.h"

/**
 * print_char - prints a character
 * @arg: list of type va_list
 * Return: length of char
 */

int print_char(va_list arg)
{
	char s_char;

	s_char = va_arg(arg, int);
	_putchar(s_char);
	return (1);
}
