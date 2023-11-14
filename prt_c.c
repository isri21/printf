#include "main.h"
/**
 * prt_c - Prints a character to the stdout when used wiht printf
 * @l: list of arguments from a variadic function.
 *
 * Return: 1
*/
int prt_c(va_list l)
{
	char c =  va_arg(l, int); /* gets the char form the argument list */

	_putchar(c); /* prints the char */
	return (1);
}

