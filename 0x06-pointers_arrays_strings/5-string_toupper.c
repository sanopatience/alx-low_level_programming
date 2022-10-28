#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @n: point
 * Return: char
 */

char *string_toupper(char *n)
{
int i;
i = 0;
while (n[i] != '\0')
{
while (n[i] >= 'a' && n <= 'z')
{
n[i] = n[i] - 32;
}
i++;
}
return (n);
}
