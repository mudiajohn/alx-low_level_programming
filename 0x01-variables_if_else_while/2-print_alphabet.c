#include <stdio.h>
/**
*main - Entry point
*Description: 'Print Alphabets'
* Return: always 0
*/
int main(void)
{
int n = 97;
while (n <= 122)
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
