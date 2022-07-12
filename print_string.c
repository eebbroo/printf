#include "main.h"

/**
 *print_string - Prints formatted string
 *
 *@argp: Argument parameters
 *
 *Return: return int.
 */

char print_string(va_list argp)
{
	char *s = va_arg(argp, char *);
	int len = 0;

	if (s == NULL)
		s = "(nill)";
	while (*s)
	{
		_putchar(*s);
		len++;
		s++;
	}
	return (len);
}
