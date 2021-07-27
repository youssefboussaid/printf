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
