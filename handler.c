#include "main.h"

/**
  * _puts - this is a function for printing strings
  * @str: pointer to a string
  * Return: Always(success)
 */
int _puts(char *str)
{
	int index = 0;

	while (str[index])
	{
		_putchar(str[index]);
		index++;
	}
	return (index);
}

/**
 * character - Handles the 'c' format
 * @args: va_list containing the argument for 'c'
 * Return: Number of characters printed
 */

int character(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

/**
 * percent - Handles the '%%' format
 * Return: Always returns 1
 */
int _percent(void)
{
	_putchar(37);
	return (1);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
