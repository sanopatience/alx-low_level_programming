#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * followed by a new line
 */
void print_alphabet_x10(void)
{
int num;
int c;
for (num = '0'; num <= '9'; num++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
