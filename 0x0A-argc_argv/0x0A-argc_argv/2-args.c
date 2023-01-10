#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * main - this function prints the name of the program.
 * @argc: count of the command line arguments
 * @argv: the command line arguments
 * Return: EXIT_SUCCESS
 */

int main(int argc, char **argv)
{

while (argc--)
{
printf("%s\n", *(argv++));
}
exit(EXIT_SUCCESS);

}
