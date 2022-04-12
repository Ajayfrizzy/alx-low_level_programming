#include <stdio.h>


/**
 * main - Entry point
 *
 * Printing single base 10 numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
int ASCII = 10;
for (x = 0; x < 10; x++)
{
printf("%d", x);
}
printf("%c", ASCII);
return (0);
}
