#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...);
char print_string(va_list);
int _putchar(char);
int (*get_func(const char))(va_list);

#endif
