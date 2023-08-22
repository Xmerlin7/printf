#include "main.h"
/**
 * print_HEX - convert decimal to uppercase HEX
 * @n: decimal number
 * Return: the number of digit printed
 */
int print_HEX(unsigned int n)
{
int rem, i = 0, j, ctr = 0;
int *hex = NULL;

hex = (int *)malloc(40 * sizeof(int));

if (hex != NULL)
{
while (n != 0)
{
rem = n % 16;
if (rem < 10)
{
hex[i] = 48 + rem;
i++;
}
else
{
hex[i] = 55 + rem;
i++;
}
n /= 16;
}

for (j = i - 1; j >= 0; j--)
ctr += _putchar(hex[j]);

free(hex);
return (ctr);
}
else
return (-1);
}
/**
 * print_0x_hex - print 0x+adress Number
 * @n: number to converted
 * Return: number printed
 */
int print_0x_hex(void *n)
{
int ctr;
ctr = 0;

if (n == NULL)
return (-1);
else
{
_putchar(48);
_putchar('x');
ctr += 2;
ctr += print_dig((long)n, 16);
}
return (ctr);
}
