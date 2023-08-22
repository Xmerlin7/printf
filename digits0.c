#include "main.h"
/**
 * print_dig - prints digits(hexa, deci)
 * @n: num to be converted
 * @base: base (16 or 10)
 */
int print_dig(long n, int base)
{
int ctr;
char *str;

ctr = 0;
str = "0123456789abcdef";
if (n < 0)
{
write(1, "-", 1);
return (print_dig(-n, base) + 1); /*we added one to represent the "-"*/
}
else if (n < base)
{
return (_putchar(str[n]));
}
else
{
ctr = print_dig(n / base, base);
return (ctr + print_dig(n % base, base));
}
}
/**
 * print_binary - convert decimal to binary
 * @n: num
 * Return: number of binary
 */
int print_binary(unsigned int n)
{
int ctr;
ctr = 0;

if (n == 0)
{
return (0);
}
else
{
print_binary(n / 2);
_putchar(n % 2 + '0');
ctr++;
}
return (ctr);
}
/**
 * print_octal - convert decimal to octal
 * @n: num
 * Return: number of octal
 */
int print_octal(unsigned int n)
{
int rem;
int ctr;
int j, i;
int octal[40] = {0};

j = 0;
ctr = 0;
if (n == 0)
{
_putchar('0');
ctr++;
return (ctr);
}
while (n != 0)
{
rem = n % 8;
octal[j++] = rem + '0';
n /= 8;
}
for (i = j - 1; i >= 0; i--)
ctr += _putchar(octal[i]);
return (ctr);
}
