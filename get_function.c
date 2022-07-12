#include "main.h"
/**
 * get_function - Selects the correct function to perform operation.
 *
 * @s: argument indentifier
 * @index: index for argument indentifier
 *
 * Return: pointer to a function.
 */

int(*get_function(const char id))(va_list argp)
{
	prv_t prv[] = {
		{'s', print_str},
		{'d', print_dec},
		{'i', print_dec},
		{'c', print_char},
		{'b', print_bin},
	};
	const int len = 13;
	int i = 0;

	while (i < len)
	{
		if (id == prv[i].id)
		{
			return (prv[i].f);
		}
		i++;
	}
	return (NULL);
}
