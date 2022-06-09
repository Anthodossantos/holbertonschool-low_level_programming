#include <stdio.h>
/**
 *main - putchar alphabet
 *
 *Return: 0
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
printf("%c", c);
for (c = 'A'; c <= 'Z'; ++c)
printf("%c", c);
printf("\n");
return (0);
}
