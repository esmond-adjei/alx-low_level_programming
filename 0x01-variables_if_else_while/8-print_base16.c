#include<stdlib.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: printing lower and uper case latters
 *
 * Return: 0
 */
int main(void)
{
int cha;
char chb;

for (cha = 0; cha <= 9; cha++)
{
putchar(cha % 10 + '0');
}
for (chb = 'a'; chb <= 'f'; chb++)
{
putchar(chb);
}
putchar('\n');
return (0);
}
