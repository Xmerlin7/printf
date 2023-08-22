#include "main.h"
/**
 * lh_handle - handels the specifires (l, h)
 * @specifier: the specifier to be checked
 * @ap: a pointer that points to the next
 * block
 */
int lh_handler(char specifier, va_list ap)
{
int ctr;

ctr = 0;
switch (specifier)
{
case 'd':
case 'i':
case 'u':
ctr += print_dig((long)va_arg(ap, unsigned int), 10);
break;
case 'o':
ctr += print_octal((long)va_arg(ap, unsigned int));
break;
case 'x':
ctr += print_dig((long)va_arg(ap, unsigned int), 16);
break;
case 'X':
ctr += print_HEX((long)va_arg(ap, unsigned int));
break;
default:
ctr += _putchar(specifier);
break;
}
return (ctr);
}
