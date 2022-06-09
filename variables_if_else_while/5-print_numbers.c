#include <stdio.h>
/**
 *main - prints single digit number base 10 start 0
 *Return: 0
 */
int main(void)
{
int num = 1024;
while (num != 0)
{
int digit = num % 10;
num = num / 10;
printf("%d\n", digit);
}
return (0);
}
