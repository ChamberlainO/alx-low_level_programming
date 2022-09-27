#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string in which to check for needle.
 * @needle: Substring to find in haystack.
 *
 * Return: Pointer to the beginning of needle in haystack or Null if no match.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + 1);
	}
	return (0);
}
