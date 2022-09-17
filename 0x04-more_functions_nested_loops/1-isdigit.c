#include "main.h"
/**
 * _isdigit - checks if a character is a digit or not
 * @c: character to be checked
 * Return: 1 if true or 0 if false
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
