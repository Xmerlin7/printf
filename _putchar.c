#include <unistd.h>
/**
 * _putchar - prints charachter
 * @c: character to be printed
 * Return: 1 if success (number of bytes which is 1)
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
