#include <stdio.h>
/**
* main - prints all single digit numbers of base 10 starting from 0,
*
* Return: Always 0 (Success)
*/
int main(void)
{
for (int i = 0; i < 10 ; i++)
{
putchar((i / 10) + '0');
printf("\n");
}
return (0);
}
