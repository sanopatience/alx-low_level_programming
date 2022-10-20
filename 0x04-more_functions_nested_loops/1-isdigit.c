#include "main.h"
/**
 * _isdigit - checks if a char is a digit
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int __isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
