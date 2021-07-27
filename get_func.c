#include "holberton.h"
/**
 * get_func - check depending on separator
 * @s: char
 *@ap: argument of type va_list
 * Return: int
 */
int get_func(const char s, va_list ap)
{
	int i = 0, count = 0;
	printf_t ch[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{'b', print_binaire},
		{'u', print_unsf},
		{'o', print_oct},
		{'x', print_hex},
		{'X', print_heX},
	};
	while (ch[i].c != 0)
	{
		if (ch[i].c == s)
		{
			count = count + ch[i].fun(ap);
			return (count);
		}
		i++;
	}
	return (0);
}
