#include <stdio.h>
/**
 *
 * main -prints alphabet in reverse order
 * Return: Always (success)
 */
int main(void)
{
char c;
for (c = 'z'; c = 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
