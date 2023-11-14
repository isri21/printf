#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct specifier_func - Used to store the conversion specifiers &
 * their associated function
 * @sign: Conversion Specifier
 * @assoc_fun: pointer to those functions
*/
typedef struct specifier_func
{
	char *sign;
	int (*assoc_fun)();
} search;

int _printf(const char *, ...);
int _putchar(char);
int prt_c(va_list);
int _strlen(const char *s);
int prt_s(va_list);
int prt_r(va_list);
int prt_pp(void);
int prt_d(va_list);
int inlen(int);
int prt_rot13(va_list);
void prt_n(int n);
#endif

