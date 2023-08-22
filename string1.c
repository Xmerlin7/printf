#include "main.h"
/**
 * print_str_rot13 -  prints the rot13'ed string
 * @s: a pointer to the string
 * Return: length of the string s
 */
int print_str_rot13(char *s)
{
int i;
char ch;

for (i = 0; s[i]; i++)
{
if (isalpha(s[i]))
{
ch = s[i];
if ((ch >= 'A' && ch <= 'M') || (ch >= 'a' && ch <= 'm'))
_putchar(ch + ('N' - 'A'));
else if ((ch >= 'N' && ch <= 'Z') || (ch >= 'n' && ch <= 'z'))
_putchar(ch + ('A' - 'N'));
}
else
{
_putchar(s[i]);
}
}
return (i);
}
/**
 *print_rev - prints a string in reverse
 *@s: string to be printed
 *Return: number of chars printed
 */
int print_str_rev(char *s)
{
int i;

i = _strlen(s);
for (i = _strlen(s) - 1; i >= 0; i--)
{
_putchar(s[i]);
}
return (_strlen(s));
}
