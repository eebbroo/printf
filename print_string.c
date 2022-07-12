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
	char *ptr = va_arg(argp, char *);
	int val = 0;

	if (ptr == NULL)
		ptr = "No Arguments";
	while (*ptr)
	{
		_putchar(*ptr);
		val++
		ptr++;
	}
	return (val);
}
