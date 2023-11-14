#include "main.h"
/**
 * prt_s - Prints a string to the stdout when used with printf
 * @l: list of arguments from a variadic function.
 *
 * Return: Number of characters printed
*/
int prt_s(va_list l)
{
	char *str = va_arg(l, char*); /* get the string from arg list */
	int i, len;

	if (str == NULL) /* if the string is null print (null) */
	{
		str = "(null)";
		len = _strlen(str); /* get the length of the string */
		for (i = 0; i < len; i++)
			_putchar(str[i]); /* print the string */
	}
	else /* else print the string */
	{
		len = _strlen(str); /* get the lenght of the string */
		for (i = 0; str[i] != '\0'; i++)
			_putchar(str[i]); /* print the string */

	}
	return (len);
}

