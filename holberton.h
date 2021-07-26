#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct datatype - Struct datatype
 *
 * @type: The type of argument
 * @func: The function pointer to the print function
 */
typedef struct datatype
{
	char *type;
	int (*func)(va_list list);
}f_printf;

int _putchar(char c);
int print_char(va_list ap);
int print_string(va_list ap);
int print_int(va_list ap);
int _printf(const char *format, ...);
int print_percent(va_list ap);
int get_func(const char s, va_list ap);


#endif /* HOLBERTON_H */
