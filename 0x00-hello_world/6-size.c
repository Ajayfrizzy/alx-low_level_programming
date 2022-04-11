#include <stdio.>


/**
*main - Entry point                                                           
*
*Return: Always 0 (Success)
*
*/
int main(void)
{                        
int i;
char str[30] = "size of ";
float f;
long int li;
long long int lli;
char c;
printf("size of a char: %d byte(s)\n", (unsigned long)sizeof(c));
printf("size of a int: %d byte(s)\n", (unsigned long)sizeof(i));
printf("size of a long int: %d byte(s)\n", (unsigned long)sizeof(li));
printf("size of a long long int: %d byte(s)\n", (unsigned long)sizeof(lli));
printf("size of a float: %d byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
