#include <stdio.h>


/**
 * main - Entry point
 *
 * Printing single digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ASCII = 10;
int x;
for (x = '0' ; x <= '9' ; x++)
{
putchar(x);
}
putchar(ASCII);
return (0);
}
