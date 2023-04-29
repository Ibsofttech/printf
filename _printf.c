#include "main.h"

/**
 * _printf - a function that print string and character
 * @format: store the argument
 * Return: return the number of character
 */

int _printf(const char *format, ...)
{
	int i, my_value = 0, my_v;
	va_list my_args;

	va_start(my_args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(my_args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			my_v = put_s(va_arg(my_args, char *));
			i++;
			my_value += (my_v - 1);
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
			i++;
		}
		my_value += 1;
	}

	va_end(my_args);

	return (my_value);
}
