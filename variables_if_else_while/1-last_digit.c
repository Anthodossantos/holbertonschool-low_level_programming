#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - the string last digit of n
 *Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);
int lastdigit = n % 10;
if (lastdigit > 5)
{
printf("%d and is greater than 5", lastdigit);
}
else if (lastdigit == 0)
{
printf("%d and is 0", lastdigit);
}
else
{
printf("%d and is less than 6 and not 0", lastdigit);
}
printf("\n");
return (0);
}
