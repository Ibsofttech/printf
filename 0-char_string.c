#include "main.h"

/**
 * print_c - for printing charaters (%c)
 * @my_list: Store the a list of characters
 * Return: num of parameters printed on the console
 */
int print_c(va_list my_list)
{
	int c = va_arg(my_list, int);

	return (_putchar(c));
}

/**
* print_s - for printing strings (%s)
* @my_list: Store the a list of string
* Return: num of parameters printed on the console
*/
int print_s(va_list my_list)
{
	int i, count = 0;
	char *str;

	str = va_arg(my_list, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		count += _putchar(str[i]);

	return (count);
}
