# `_printf()` function
- This is a readme file for the custom and simple `_printf()`  function.
- This function can handle the `%c`, `%s`, `%%`, `%d` and `%i` standard format specifiers, and also two more custom format specifiers `%r` and `%R`
	- `%r` - reverses associated string and prints it to the standard output.
	- `%R` - prints the rot13 version of a string to the standard output.
- While there are many standard  and custom specifiers that we didn't implement in this project, more standard and custom specifiers will be include in the near future.
## Files in this repository
- `printf.c`: contains the main `_printf()` function used to print formatted string to the standard output.
- `main.h`: header file where all function protypes are located.
- `_putchar.c`: contains the  `_putchar()` function which is an a custom function similar to the `putchar()` function in the standard library.
- `prt_c.c`: contains the `prt_c()` function used to print a single character to the standard output..
- `prt_d.c`: contains the `prt_d()` function used to print an integer to the standard output. This is used in the main `_printf.c` function.
- `prt_n.c`: contains the `prt_n()` function used to print the integer to the standard output, this also used in the the `ptr_d.c` function.
- `ptr_pp.c`: contains the `ptr_pp()`  function used to print the `%` character to the standard output.
- `ptr_s.c`: contains the `ptr_s()` function used to print a string to the standard output.
- `ptr_r.c`: contains the `ptr_r()` function used to print a string in reverse to the standard output.
- `inlen.c`: contains the `inlen()` function used to get the character length of an integer.
- `_strlen`: contains the `_strlen()` function used to get the length of a string.

# Tasks
## 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
Write a function that produces output according to a format.

- Prototype: `int _printf(const char *format, ...);`
- Returns: the number of characters printed (excluding the null byte used to end output to strings)
- write output to stdout, the standard output stream
- `format` is a character string. The format string is composed of zero or more directives. See `man 3 printf` for more detail. You need to handle the following conversion specifiers:
    - `c`
    - `s`
    - `%`
- You don’t have to reproduce the buffer handling of the C library `printf` function
- You don’t have to handle the flag characters
- You don’t have to handle field width
- You don’t have to handle precision
- You don’t have to handle the length modifiers
## 1. Education is when you read the fine print. Experience is what you get if you don't
Handle the following conversion specifiers:

- `d`
- `i`
- You don’t have to handle the flag characters
- You don’t have to handle field width
- You don’t have to handle precision
- You don’t have to handle the length modifiers
## 13. Print is the sharpest and the strongest weapon of our party
Handle the following custom conversion specifier:

- `r` : prints the reversed string

## 14. The flood of print has turned reading into a process of gulping rather than savoring

Handle the following custom conversion specifier:

- `R`: prints the rot13'ed string
