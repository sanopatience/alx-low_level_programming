#include <stdio.h>
/*
 * main -prints alphabetic
 * Return: Always (success)
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
	putchar(c);

putchar('\n');
return (0);
}
