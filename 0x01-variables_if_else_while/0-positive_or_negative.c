#include(stdio.h)
#include <stdlib.h>
#include <time.h>
/* Random number generation */

/* The function prins out if its +(ve), -(ve) or zero */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive \n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
