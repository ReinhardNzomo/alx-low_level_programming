#include "main.h"

/**
* is_palindrome - returns true if the given string is a palindrome
*@s: string to check
*Return: true if the given string is a palindrome
*/

int is_palindrome(char *s)
{
	int index = 0;
	int l = strlencheck(s);

	if (!(*s))
		return (1);

	return (strcmpcheck(s, l, index));
}

/**
 * strlencheck - Returns the length of a string.
 * @a: The string to be measured.
 *
 * Return: The length of the string.
 */
int strlencheck(char *a)
{
	int l = 0;

	if (*(a + l))
	{
		l++;
		l += strlencheck(a + l);
	}

	return (l);
}

/**
 * strcmpcheck - Checks if a string is a palindrome.
 * @a: The string to be checked.
 * @l: The length of a.
 * @i: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int strcmpcheck(char *a, int l, int i)
{
	if (s[i] == s[l / 2])
		return (1);

	if (s[i] == s[l - i - 1])
		return (strcmpcheck(s, l, i + 1));

	return (0);
}
