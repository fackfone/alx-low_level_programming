#include "holberton.h"
#include <string.h>
#include <stdio.h>



/**
 * check_palindrome_char - checks the characters of s
 * @s: parameter of function is_palindrome
 * @first_char: parameter of functionc check
 * @last_char: parameter of function check
 * Return: 1 if palindrome and empty, 0 otherwise
 */


int check_palindrome_char(char *s, int first_char, int last_char)
{
	if (first_char == last_char)
	{
		return (1);
	}
	else if (s[first_char] != s[last_char])
	{
		return (0);
	}
	else if (first_char < last_char + 1)
	{
		return (check_palindrome_char(s, first_char + 1, last_char - 1));
	}
	return (1);
}

/**
 * is_palindrome - evaluates if s is a palindrome
 * @s: parameter of function is_palindrome
 * Return: 1 if palindrome and empty, 0 otherwise
 */

int is_palindrome(char *s)
{
	int n;

	n = (int)strlen(s) - 1;
	if (n == 0)
	{
		return (1);
	}
	return (check_palindrome_char(s, 0, n));
}
