#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
int _puts(char *s);
int reverse_string(char *s);
int print_str_rev(char *s);
int print_str_rot13(char *s);

int specifier_handler(char specifier, va_list ap);
int lh_handler(char specifier, va_list ap);
int escape_handler(char specifier);
int print_dig(long n, int base);
int print_binary(unsigned int);
int print_octal(unsigned int);
int print_HEX(unsigned int n);
int print_pointer(unsigned int n);
int print_0x_hex(void *n);
int _puts_0xS(char *S);
#endif
