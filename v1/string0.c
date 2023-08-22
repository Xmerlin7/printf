#include "main.h"
/**
 * _strlen - gets the lenght of a string
 * @s: string to be calculted
 * Return: length of the string s
 */
int _strlen(char *s)
{
    int len;

    for (len = 0; *(s + len) != '\0'; len++)
        ;
    return (len);
}
/**
 * _puts - prints a string
 * @s: pointer to string to be printed
 * Return: length of the string s
 */
int _puts(char *s)
{
    int ctr;

    ctr = 0;
    if (NULL == s)
        s = "(null)";
    else
    {
        while (*s)
        {
            _putchar(*s++);
            ctr++;
        }
    }
    return (ctr);
}
/**
 * print_0x_hex - print \xstring
 * @s: a pointer to a string
 * Return: number of char printed
 */
int _puts_0xS(char *S)
{
    int ctr, i;

    ctr = 0;
    i = 0;
    if (NULL == S)
        S = "(null)";
    else
    {
        while (*(S + i))
        {
            if (((*(S + i) > 0) && (*(S + i) < 32)) || (*(S + i) >= 127))
            {
                _putchar('\\');
                _putchar('X');
                ctr += 2;
                if (*(S + i) < 16)
                {
                    _putchar(48);
                    ctr++;
                }
                ctr += print_HEX(*(S + i));
            }
            else
            {
                _putchar(*(S + i));
                ctr++;
            }
            i++;
        }
    }
    return (ctr);
}
