#include "main.h"

/**
 *_printf - Prints output to standar output
 *
 *@format : Formatted string output
 *@ ... : Unknown number of arguments
 *
 *Return : Return arguments
 */

int _printf(const char *format, ...)
{
        int i = 0, val = 0;
        int (*get)(va_list);
        va_list argp;

        va_start(argp, format);

	if (format == NULL)
		return (-1);
        while (*(format + i))
        {
                if (*(format + i) != '%')
                {
                        val += _putchar(*(format + i));
			i++;
			continue;
		}
		if (format[i + 1] == '%')
		{
			val += _putchar(*(format + i));
			i++;
			continue;
		}
		get = get_function(format[++i]);
		if ((get) != NULL)
		{
			val += get(argp);
		}
		else
		{
			if (*(format + i) == '\0')
				return (-1);
			val += _putchar(format[i - 1]);
			val += _putchar(format[i]);
		}
		i++;
	}
	va_end(argp);
	return (val);
}
