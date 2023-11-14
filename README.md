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
