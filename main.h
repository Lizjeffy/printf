#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
void _puts(char *str);

/**
 * struct checker - for printf
 * @id: pointer
 * @func: pointer to function
 */

typedef struct checker
{
	char *id;
	int (*func)();
} check_match;
int putstrng(va_list list);
int putper(void);
int print_char(va_list arg);
int putint(va_list list);
int putni(va_list list, int print_sign);
int putbin(va_list val);
int print_rev(va_list val);
int print_rot13(va_list val);

#endif
