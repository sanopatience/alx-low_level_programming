#include <stdio.h>

/**
 * main -prints the alphabets in lower case.
 *
 * Return: Always (success)
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
}
putchar('\n');
 
return (0);
}
