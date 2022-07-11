#include "main.h"

/**
 *print_string - Prints formatted string
 *
 *@argp: Argument parameters
 *
 *Return: return string.
 */

char print_string(va_list argp)
{
	char *s = va_arg(argp, char *);
	int val = 0;

	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		_putchar(*s);
		val++
		s++;
	}
	return (val);
}
