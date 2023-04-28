#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#define BUF_SIZE 1024
#define ZERO_FLAG 4
#define SPACE_FLAG 2
#define PLUS_FLAG 1

int _printf(const char *format, ...);
int _putchar(char c);
void _puts(char *str);
int print_sig(unsigned int n, int base);
int print_bin(unsigned long int n);
int print_number(int n, int flags);
int format_handler(char format, va_list va);
int print_S(char *str);
int print_hex3(int op, unsigned int n, int uppercase);
int print_pointer(void *ptr);
int print_str(char *str);
int print_hex(int op, unsigned int n, int uppercase);

#endif
