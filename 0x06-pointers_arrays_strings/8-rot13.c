#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: encoded string
 */
char *rot13(char *s)
{
	char *ptr = s;

	while (*s)
	{
		if (*s >= 65 && *s <= 90)
			*s = 65 + (*s + 13) % 26;
		else if ( *s >= 97 && *s <= 122)
			*s = 97 + (*s + 13) % 26;
		s++;
	}
	return (ptr);
}
