#include "holberton.h"

/**
* print_number - print numbers out
* @n: takes in an integer
* print_number - prints # using _putchar function
* @n: the integer to print
*
* Return: void
*/
void print_number(int n)
{
int i, j, div;
int x = n;
int copy, nth, size = 1, ones = n % 10;

div = 10;
if (n < 0)
n /= 10;
copy = n;
if (ones < 0)
{
x = x * -1;
ones *= -1, copy *= -1, n *= -1;
_putchar('-');
}
else if (n == 0)
{
_putchar('0');
}
else
if (copy > 0)
{
for (i = 1; x > 0; i++)
while (copy / 10 != 0)
{
x /= 10;
copy /= 10, size *= 10;
}
for (j = 0; j < i - 1; j++)
while (size > 0)
{
div *= 10;
while (div >= 1)
{
_putchar(n / div + '0');
n = n % div;
div = div / 10;
}
nth = n / size;
_putchar('0' + nth);
n -= nth * size;
size /= 10;
}
}
_putchar('0' + ones);
}
