#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...);
char print_string(va_list argp);
int _putchar(int);

#endif
