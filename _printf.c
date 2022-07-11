#include "main.h"

/**
 *_printf - Prints output to standar output
 *
 *@format : Formatted string output
 *@ ... : Unknown number of arguments
 *
 *Return : Return arguments
 */

void _printf(const char *format, ...)
{
	int i = 0, cnt = 0;
	int (*func)(va_list);
	va_list argp;

	va_start(argp, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				_putchar('%');
			}
			if (*format == 'c')
			{
				char char_to_print = va_arg(argp, int);

				_putchar(char_to_print);
			}
			func = get_function(format[++i]);
			if ((func) != NULL)
			{
				val += func(argp);
			}
			else
			{
				if (format[i] == '\0')
					return (-1);
				val += _putchar(format[i - 1]);
				val += _putchar(format[i]);
			}
			i++;
		}
		va_end(argp);
		return (val);
}
