#include "main.h"

/**
 * _strspn - gets length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The string to be check against.
 *
 * Return: Nunber of bytes of s in accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}

