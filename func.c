#include "holberton.h"
/**
 * _printchar - prints a character
 * @ap: The character to print, argument pointer
 *
 * Return: 1
 */
int _printchar(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}
/**
 * _printstring - prints a string
 * @ap: The string to print, argument pointer
 *
 * Return: i
 */
int _printstring(va_list ap)
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
 * _printnum - function that prints an integer
 * @n: integer to be printed by function.
 */
void _printnum(int n)
{
	unsigned int m = n;

	if (m / 10 != 0)
	{
		_printnum(m / 10);
	}
	_putchar(m % 10 + '0');
}
/**
 * _getcount - function that counts the length of an integer.
 * @n: integer to be counted.
 * Return: lenght of integer.
 */
int _getcount(int n)
{
	int counter = 0;
	unsigned int m = n;

	while (m > 0)
	{
		m = m / 10;
		counter++;
	}
	return (counter);
}

/**
 * _printint - function that prints an integer with helper function.
 * @ap: The string to print, argument pointer
 *
 * Return: counter
 */
int _printint(va_list ap)
{
	int counter = 0;
	int n = va_arg(ap, int);

	if (n < 0)
	{
		n = -(n);
		_putchar('-');
		counter++;
	}
	if (n == 0)
		counter++;
	counter += _getcount(n);
	_printnum(n);
	return (counter);
}
