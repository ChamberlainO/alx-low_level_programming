#include "main.h"

/**
 * _memset - fills a memeory block with a consonant byte
 * @s: Address to memory block
 * @b: char to be used
 * @n: number of bytes to be used
 *
 * Return: Pointer to memory block
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
