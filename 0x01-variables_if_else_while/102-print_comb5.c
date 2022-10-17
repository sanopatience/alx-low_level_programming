#include <stdio.h>
/**
 * main - prints all combinations of two two digits numbers
 * Return: Always 0
 */
int main(void)
{
int c;
int a;
for (c = '0'; c <= '9'; c++)
{
for (a = c + '1'; a <= '99'; a++)
{
putchar((c / 10) + '0');
putchar((c % 10) + '0');
putchar(' ');
if (c == '98' && a == '99')
{
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
