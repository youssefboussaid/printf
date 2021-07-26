#include "holberton.h"
/**
 * print_char - prints a character
 * @ap: The character to print, argument pointer
 *
 * Return: 1
 */
int print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}
/**
 * print_string - prints a string
 * @ap: The string to print, argument pointer
 *
 * Return: i
 */
int print_string(va_list ap)
{
	char *s = va_arg(ap, char *);
	int i = 0;

	if (s == NULL)
	s = "(null)";
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 *print_percent - print percent
 *@arg: argument of type of va_list
 * Return: integer
 */
int print_percent(va_list arg)
{
	(void)arg;

	_putchar('%');
	return (1);
}

/**
 * _printint - function that prints an integer with helper function.
 * @ap: The string to print, argument pointer
 *
 * Return: counter
 *
 */
int print_int(va_list arg)
{
	int n = va_arg(arg, int);
	int count = 0, rest = 1;
	unsigned int x;
	
	x = n;
	if (n < 0)
	{
		_putchar('-');
		x = -x;
		count++;
	}

	while ((x / rest) > 9)
	{
		rest = rest * 10;
	}
	while (rest > 0)
	{
		_putchar(x / rest + '0');
		x = (x % rest);
		rest = rest / 10;
		count++;
	}
	return (count);
}
