#include <stdio.h>

/**
 * main -prints the alphabetic in lower and upper case.
 *
 * Return: Always (success)
 */
int main(void)
{
char c;
for (c = 'z'; c <= 'z'; c++)
{
putchar(c);
}
for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}

putchar('\n');

return (0);
}
