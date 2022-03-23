#include <unistd.h>

/**
 *_putchar - write th character c to stdout
 *@c: The character to print
 *
 *Return: On success 1.
 *On error, -1 is returned, and error is there returned
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
