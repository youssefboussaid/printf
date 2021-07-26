#ifndef PRINTF_H
#define PRINTF_H
#include <limits.h>
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


#endif/* PRINTF_H */
