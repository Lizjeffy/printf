#include "main.h"

int
print_char(va_list arg)
{
	char c = (char) va_arg(v, int);

	return (print_char_handler('c', c));
}

int
putstrng(va_list list)
{
	return (print_string_handler('s', va_arg(v, char *)));
}

int
putint(va_list list)
{
	return (print_int_handler(va_arg(v, int)));
}

int
putbin(va_list val)
{
	return (print_binary_handler('b', va_arg(v, unsigned int)));
}

int
print_rev(va_list val)
{
	return (print_reverse_handler('r', va_arg(v, char *)));
}

int
print_rot13(va_list val)
{
	return (print_rot13_handler('R', va_arg(v, char *)));
}
