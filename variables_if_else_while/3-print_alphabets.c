#include <stdio.h>
/**
 *main - putchar alphabet
 *
 *Return: 0
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c = 'A'; c <= 'Z' ++c)
printf("%c", c);
return (0);
}
