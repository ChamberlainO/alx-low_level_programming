#include "main.h"

/**
 * _isupper - to check if a character is uppercase or lowercase
 * @c: character being used
 * Return: 1 if success or 0 if not
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
