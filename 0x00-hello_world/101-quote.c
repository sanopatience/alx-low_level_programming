#include <stdio.h>
#include <unistd.h>
/**
 *Description: main -Entry
 *Return: returns 0
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora korpar, 2015-10-19\n",
sizeof("and that piece of art is useful\" - Dora korpar, 2015-10-19\"));
return (1);
}
