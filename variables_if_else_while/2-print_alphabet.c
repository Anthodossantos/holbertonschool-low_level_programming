#include <stdio.h>
/**
 *main - putchar alphabet
 *
 *Return: 0
 */
void main(void)
{
int ch;
clrscr();
for (ch = ‘a’; ch <= ‘z’; ch++)
putchar(ch);
putchar (‘\n’);
getch();
}
