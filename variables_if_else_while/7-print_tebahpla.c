#include <stdio.h>
/**
*main - prints the alphabet in lowercase,
*followed by a new line, except q and e
*Return: Aways 0
*/
int main(void)
{
char i;
for (i = 'z'; i >= 'a'; i--)
putchar(i);
putchar('\n');
return (0);
}
