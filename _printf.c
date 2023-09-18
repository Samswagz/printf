#include "main.h"

/**
  * printf - function that produces output according to format
  * @format: the order in which the program compiles
  * c: displays character values
  * s: displays string values
  * %: modulo
  * Return :always (success)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int counter = 0;

	va_start(args,format);

	if (format || format[0])
	{
		return (-1);
	}
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
		format = format_nav(format, args, &counter);
		format++;
		}
		else
		{
			_putchar(*format);
			format++;
			counter++;
		}
	}
	va_end(args);
	return (counter);
}

