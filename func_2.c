#include "holberton.h"
/**
 * print_unsf - prints an unsigned integer
 * @u: the list of arguments
 * Return: number of printed characters
 *
 */
int print_unsf(va_list u)
{
	unsigned int i, num, div, o, n, count = 0;

	n = va_arg(u, unsigned int);
	o = n % 10;
	n = n / 10;
	num = n;
	div = 1;
	if (num > 0)
	{
		while ((num / 10) != 0)
		{
			num = num / 10;
			div = div * 10;
		}
		while (div >= 1)
		{
			i = n / div;
			_putchar(i + '0');
			count++;
			n = n % div;
			div = div / 10;
		}
	}
	_putchar(o + '0');
	count++;
	return (count);
}

/**
 * print_oct - prints an octal.
 * @o: the list of arguments
 * Return: number of printed characters.
 */
int print_oct(va_list o)
{
	unsigned int octal[11];
	unsigned int count = 0, n = 0;
	int i = 0;

	n = va_arg(o, unsigned int);
	if (n == 0)
	{
		_putchar(0 + '0');
		count++;
	}
	while (n > 0)
	{
		octal[i] = n % 8;
		n = n / 8;
		i++;
	}
	for (--i; i >= 0; i--)
	{
		_putchar(octal[i] + '0');
		count++;
	}
	return (count);
}

/**
 *  print_hex - prints input integer to an hexadecimal in lowercase
 *  @x: the list of arguments
 *  Return: number of printed characters
 */
int print_hex(va_list x)
{
	char hex[20];
	unsigned int count = 0, n = 0;
	int i = 0;

	n = va_arg(x, unsigned int);
	if (n == 0)
	{
		_putchar(0 + '0');
		count++;
	}
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
	return (count);
}
/**
 * print_heX - prints input integer to an hexadecimal in uppercase
 * @X: the list of arguments
 * Return: number of printed characters
 */
int print_heX(va_list X)
{
	char hex[20];
	unsigned int count = 0, n = 0;
	int i = 0;

	n = va_arg(X, unsigned int);
	if (n == 0)
	{
		_putchar(0 + '0');
		count++;
	}
	while (n > 0)
	{
		if (n % 16 >= 10 && n % 16 <= 15)
			hex[i] = 55 + (n % 16);
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
	return (count);
}

/**
 * print_rot13 - print rot string
 * @arg: argument of type va_list
 * Return:str
 */
int _rot13(va_list arg)
{
	char *str;
	int i, j;
	char ch1[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
	char ch2[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str = "(ahyy)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (str[i] == ch1[j])
			{
				_putchar(ch2[j]);
				break;
			}
		}
		if (j == 53)
		_putchar(str[i]);
	}
	return (i);
}
