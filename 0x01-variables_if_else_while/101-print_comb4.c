#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
int c;
int a;
int b;
for (c = '0'; c <= '9'; c++)
{
for (a = '0'; a <= '9'; a++)
{
for (b = '0'; b <= '9'; b++)
{
if (c < a && a < b)
{
putchar(c);
putchar(a);
putchar(b);
if (c != '7')
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
