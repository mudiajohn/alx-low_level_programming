#include <stdio.h>
/**
*main - Entry point
*Description: 'Print Alphabets lower and uppercase'
* Return: always 0
*/
int main(void)
{
int n = 97;
int m = 65;
while (n <= 122)
{
putchar(n);
}
while (m <= 98)
{
putchar (m);
}
putchar ('\n');
return (0);
}
