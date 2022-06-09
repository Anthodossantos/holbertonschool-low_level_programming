#include <stdio.h>
#include <stdlib.h>
/**
 *main - print alphabet in lowercase
 *
 */ 
int main(void)
{
int ret_code = 0;
for (char c = 'a'; (ret_code != EOF) && (c != 'z'); c++)
ret_code = putchar(c);
if (ret_code == EOF)
if (ferror(stdout)) 
{
fprintf(stderr,"putchar() failed in file %s at line # %d\n", __FILE__,__LINE__-6);
perror("putchar()");
exit(EXIT_FAILURE);
}
