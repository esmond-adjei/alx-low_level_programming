#include<stdio.h>
/**
 * main - outputs to string
 *
 * Description: Prints out "and that piece of art is useful..." without printf
 * Return: 1
 */
int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	long wh = 59;
	long th = 1;
	long syscall = 1;
	long re = 0;

	asm ("syscall" : "=a" (re) : "a" (syscall), "D" (th), "S" (s), "d" (wh));

	return (1);
}
