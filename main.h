#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*functions*/
int _putchar(char c);
int _printf(const char *format, ...);
int _puts(char *str);

/*Handlers*/
int character(va_list args);
int string(char *str);
const char *format(const char *format, va_list args, int *count);
int percent(void);

#endif
