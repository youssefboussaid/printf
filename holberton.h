#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct printf - struct printf
 * @c: The character
 * @fun: The function associated
 */
typedef struct printf
{
	char c;
	int (*fun)(va_list);
} printf_t;

int _printf(const char *format, ...);
int _putchar(char c);
int get_func(const char s, va_list ap);


int print_char(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);
int print_int(va_list arg);
int print_binaire(va_list b);
int print_unsf(va_list arg);
int print_oct(va_list arg);
int print_hex(va_list arg);
int print_heX(va_list arg);
int _rot13(va_list ap);
int _printrev(va_list ap);


#endif/* PRINTF_H */
