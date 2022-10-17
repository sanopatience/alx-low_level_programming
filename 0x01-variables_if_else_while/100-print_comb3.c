#include <stdio.h>
/**
 * main - prints all combinations of two digits
 * Return: Always 0
 */
int main(void)
{
int c;
int a;
for (c = '0'; c <= '9'; c++)
{
for (a = '0'; a <= '9'; a++)
{
if (c < a)
{
putchar(c);
putchar(a);
if (c != '8' || (c == '8' && a != '9'))
{
putchar(',');
putchar(' ';)
}
}
}
}
putchar('\n');
return (0);
}
