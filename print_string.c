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
	char val;

	if (s == NULL)
		s = "(nill)";
	while (s != '\0')
	{
		val = _putchar(*s);
		s++;
	}
	return (val);
}
