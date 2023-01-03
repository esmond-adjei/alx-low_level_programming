#include "main.h"

/**
 * _memcpy - fnct to copy memory content source to a char destination .
 * @dest: memory allocation of the destination
 * @src: memory content to copy from the src
 * @n: content in byte to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		*(dest + n) = *(src + n);
	}
	return (dest);
}
