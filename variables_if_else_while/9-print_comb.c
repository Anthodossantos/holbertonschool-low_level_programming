#include <stdio.h>
/**
* main - prints all single digit numbers of base 10 starting from 0,
*
* Return: Always 0
*/
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 57)
		{
			putchar(i);
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
return (0);
}
