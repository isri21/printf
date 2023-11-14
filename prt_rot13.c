#include "main.h"
/**
* prt_rot13 - printes string encrypted in rot13
* @li: string to from argument list
*
* Return: number of characters printed
*/
int prt_rot13(va_list li)
{
	int i, j, l;
	char *str = va_arg(li, char *); /* get the string from arg list */

	/* set array of normal alpha characters */
	char ch[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	/* rot13 version of alphabet respectivley, inorder to map later*/
	char en[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	l = _strlen(str); /* get the length fof the string */
	for (i = 0; i < l; i++)
	{
		/* if the character is not alpha print it as is */
		if (!(('A' <= str[i] && str[i] <= 'Z') || ('a' <= str[i] && str[i] <= 'z')))
		{
			_putchar(str[i]);
		}
		else /* else convert it to its respective rot13 version */
		{
			for (j = 0; j < 26 * 2; j++)
			{
				if (str[i] == ch[j])
					_putchar(en[j]); /* print the rot13 version of the char */
			}
		}
	}
	return (l);
}

