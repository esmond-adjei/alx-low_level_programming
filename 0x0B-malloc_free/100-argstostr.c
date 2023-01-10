#include <stdlib.h>
#include "main.h"

/**
 * wrdcnt - counts the number of words in a string
 * *argstostr - concantnates strings
 * @s: argument of wrdcnt
 * @ac: size of array
 * @av: char to fill array with
 * Return: string of chars
 */
int wrdcnt(int ac, char **s)
{
int j, i, n = 0;
for (j = 0; j < ac; j++)
{
for (i = 0; s[j][i]; i++)
{
if (s[j][i] == ' ')
{
if (s[j][i + 1] != ' ' && s[j][i + 1] != '\0')
n++;
}
else if (i == 0)
n++;
}
n++;
}
return (n);
}

char *argstostr(int ac, char **av)
{

char *str;
int i, n, j;
n = wrdcnt(ac, av);

if (ac == 0 || av == NULL)
{
return (NULL);
}
str = malloc(sizeof(char *) * n);
for (i = 0; i < ac; i++)
{
j = 0;
while(av[i][j])
{
*str += av[i][j];
j++;
}
*str += '\n';
}
return (str);
}
