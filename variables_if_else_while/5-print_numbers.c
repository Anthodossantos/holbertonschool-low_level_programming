#include <stdio.h>
/**
 *main - prints single digit number base 10 start 0
 *Return: 0
 */
int main(void)
{
int num = 1234567;
while (num != 0)
{
int digit = num % 10;
num = num / 10;
printf("%d", digit);
}
return (0);
}
