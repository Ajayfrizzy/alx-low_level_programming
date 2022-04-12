#include <stdio.h>


/**
 * main - Entry point
 *
 * Printing reverse letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ac;
char ASCII = '\n';
for (ac = 'z'; ac >= 'a'; ac--)
{
putchar(ac);
}
putchar(ASCII);
return (0);
}
