#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry.
 * Returns: Always 0.
 */
int main(void)
{
int n;
int d;
srand(time(0));
n = rand() - RAND_MAX / 2;
d = n % 10;
if (d > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, a);
}
else if (a == 0)
{
printf("Last digit of %d and is %d and is 0\n", n, a);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
}
return (0);
}

