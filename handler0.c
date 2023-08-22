#include "main.h"
/**
 * specifier_handler - handels the specifires
 * @specifier: the specifier to be checked
 * @ap: a pointer that points to the next
 * block
 */
int specifier_handler(char specifier, va_list ap)
{
    int ctr = 0;

    switch (specifier)
    {
    case 'c':
        ctr = _putchar(va_arg(ap, int));
        break;
    case 's':
        ctr += _puts(va_arg(ap, char *));
        break;
    case 'S':
        ctr += _puts_0xS(va_arg(ap, char *));
        break;
    case '%':
        ctr++;
        _putchar('%');
        break;
    case 'd':
    case 'i':
        ctr += print_dig((long)va_arg(ap, int), 10);
        break;
    case 'u':
        ctr += print_dig((long)va_arg(ap, unsigned int), 10);
        break;
    case 'b':
        ctr += print_binary((long)va_arg(ap, int));
        break;
    case 'o':
        ctr += print_octal((long)va_arg(ap, int)); /* to be handelled*/
        break;
    case 'x':
        ctr += print_dig((long)va_arg(ap, unsigned int), 16);
	break;
    case 'X':
        ctr = print_HEX((long)va_arg(ap, unsigned int));
	break;
    case 'p':
        ctr += print_0x_hex(va_arg(ap, void *));
        break;
    case 'r':
        ctr += print_str_rev(va_arg(ap, char *));
        break;
    case 'R':
        ctr += print_str_rot13(va_arg(ap, char *));
        break;
    default:
        ctr += _putchar(specifier);
        break;
    }
    return (ctr);
}
/**
 * escape_handler - handels the escape_specifer
 * @specifier: the specifier to be checked
 */
int escape_handler(char specifier)
{
    int ctr = 0;

    switch (specifier)
    {

    case 'n':
        _putchar('\n');
        ctr++;
        break;
    case 't':
        _putchar('\t');
        ctr += 4; /*depends on the compiler*/
        break;
    case 'v':
        _putchar('\v');
        ctr += 4; /* needs to be handelled*/
        break;
    case '"':
        _putchar('\"');
        ctr++;
        break;
    default:
        ctr += _putchar(specifier);
        break;
    }
    return (ctr);
}
