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
 * print_int - function that prints an integer with helper function.
 * @arg: The string to print, argument pointer
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
/**
 * print_binary - print binary
 * @arg: argument of type va_list
 * Return: count
 */
int print_binaire(va_list b)
{
	unsigned int binary[32];
	int i = 0;
	unsigned int n = 0, count = 0;

	n = va_arg(b, unsigned int);

	if (n <= 1)
	{
		_putchar(n + '0');
		count++;
	}
	else
	{
		while (n > 0)
		{
			binary[i] = n % 2;
			n = n / 2;
			i++;
		}
		for (i = i - 1; i >= 0; i--)
		{
			_putchar(binary[i] + '0');
			count++;
		}
	}
	return (count);
}
