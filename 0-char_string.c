#include "main.h"

/**
 * print_c - for printing a single charaters (%c)
 * @my_list: Store the a list of characters
 * Return: num of parameters printed on the console
 */
int print_c(va_list ar_list)
{
	int c = va_arg(ar_list, int);

	return (_putchar(c));
}

/**
* print_s - for printing strings or arrays of character (%s)
* @my_list: Store the a list of string
* Return: num of parameters printed on the console
*/
int print_s(va_list ar_list)
{
	int i, count = 0;
	char *str;

	str = va_arg(ar_list, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		count += _putchar(str[i]);

	return (count);
}
