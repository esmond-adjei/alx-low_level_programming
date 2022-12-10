#include<stdlib.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: Printing two digit combo
 *
 * Return: 0
 */
int main(void)
{
int cha;
int chb;
for (cha = 0; cha <= 8; cha++)
{
for (chb = cha; chb <= 9; chb++)
{
if (cha == chb)
{
continue;
}
putchar(cha % 10 + '0');
putchar(chb % 10 + '0');
if (cha == 8 && chb == 9)
{
break;
}
putchar(',');
putchar(' ');

}
chb++;
}
putchar('\n');
return (0);
}
