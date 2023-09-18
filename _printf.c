#include "main.h"

/**
  * printf - function that produces output according to format
  * @format: the order in which the program compiles
  * c: displays character values
  * s: displays string values
  * %: modulo
  * Return: Always (success)
 */
int _printf(const char *format, ...)
{
	int count ;
	va_list args;
	count = 0;

	va_start(args, format);

	if (!format || !format[0])

		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
		if (*format == '\0')
			{
				return (-1);
			}
			while (*format == ' ')
				format++;
			format = format_navigation(format, args, &count);
			format++;
		}
		else
		{
			_putchar(*format);
			format++;
			count++;
		}
	}

	va_end(args);
	return (count);
}
