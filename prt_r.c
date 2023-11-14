#include "main.h"
/**
 * prt_r - Prints a string in reverse to the stdout when used with printf
 * @l: list of arguments from a variadic function.
 *
 * Return: Number of characters printed
*/
int prt_r(va_list l)
{
	char *str = va_arg(l, char*); /* get the string from arg list */
	int i, len;

	len = _strlen(str);
	if (str == NULL) /* if the string is null set it to (null) */
		str = "(null)";
	for (i = len - 1; i >= 0; i--) /* print the string in reveres */
		_putchar(str[i]);
	return (len);
}

