#include <stdio.h>

/**
 * main - prints number form 0 to 9.
 *
 * Return: Always (success)
 */
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
