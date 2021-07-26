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
} data_t;

int _putchar(char c);
int _printchar(va_list ap);
int _printstring(va_list ap);
int _printint(va_list ap);
int _printf(const char *format, ...);
int _rot13(va_list ap);
int  _printrev(va_list ap);

#endif /* HOLBERTON_H */
