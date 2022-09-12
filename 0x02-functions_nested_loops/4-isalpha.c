#include "main.h"
/**
* _isalpha -> check if alphabet
* @c: a character argument
* Return: returns 1 or 0
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
