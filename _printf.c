#include "main.h"
/**
 * _printf - prints what ever you want :)
 * @format: a poiter to the format (string, char, decimal)
 * Return: the size of printed output text
 */
int _printf(const char *format, ...)
{
    int ctr;
    va_list ap;
    va_start(ap, format);

    ctr = 0;
    if (format == NULL)
        return (-1);
    while (*format)
    {
        if (*format == '%')
        {
            ++format;
            if ((*format == 'l') || (*format == 'h'))
            {
                ctr += lh_handler(*++format, ap);
            }
            else
            {
                ctr += specifier_handler(*format, ap);
            }
            va_arg(ap, char *);
        }
        else if (*format == '\\')
        {
            ctr += escape_handler(*(++format));
        }
        else
            ctr += write(1, format, 1);
        ++format;
    }

    va_end(ap);
    return (ctr);
}
