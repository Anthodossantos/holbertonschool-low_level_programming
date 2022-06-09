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
removeChar("%c", 'e');
printf("%c", c);
printf("\n");
return (0);
}
