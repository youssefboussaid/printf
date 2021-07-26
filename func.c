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
 * print_int - function that prints an integer
 * @n: integer to be printed by function.
 */
void print_int(int n)
{
	unsigned int m = n;

	if (m / 10 != 0)
	{
		print_int(m / 10);
	}
	_putchar(m % 10 + '0');
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
