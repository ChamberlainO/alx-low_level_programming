#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: The string to be checked
 * @accept: The string to be check against.
 *
 * Return: Point to bytes in s that matches or Null if no match.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
