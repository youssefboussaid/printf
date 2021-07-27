#include "holberton.h"

/**
 * _printrev - prints a string, in reverse
 * @ap: argument pointer to take arguments from
 *
 * Return: the counter of the string
 */
int _printrev(va_list ap)
{

	char *s = va_arg(ap, char*);
	int c;
	int i = 0;

	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
		i++;
	for (c = i - 1; c >= 0; c--)
		_putchar(s[c]);
	return (i);
}

/**
 * print_p - prints a string and returns the length of string
 * @p: the list of arguments
 * Return: number of printed characters
 */
int print_p(va_list p)
{
	unsigned long hex[20], n = 0;
	unsigned int count = 0;
	int i = 0;

	n = va_arg(p, unsigned long);
	if (n == 0)
	{
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar(')');
		count += 5;
	}
	else if (n > 0)
	{
	_putchar('0');
	_putchar('x');
	count += 2;
	while (n > 0)
	{
		if (n % 16 >= 10 && n % 16 <= 15)
			hex[i] = 87 + (n % 16);
		else
			hex[i] = 48 + (n % 16);
		n = n / 16;
		i++;
	}
	for (--i; i >= 0; i--)
	{
		_putchar(hex[i]);
		count++;
	}
	}
	return (count);
}
