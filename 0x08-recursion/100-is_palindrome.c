#include "main.h"

int s_len(char *s);
int compare(char *head, char *tail);
int is_palindrome(char *s);

/**
 * s_len - Measures the length of a string.
 * @s: string to be measured.
 *
 * Return: String length.
 */

int s_len(char *s)
{
	int len = 1; /* mark first index */

	if (*s == '\0')
	{
		return (0);
	}
	s++; /* move pointer */
	len += s_len(s); /* make recursive call & update len */

	return (len);
}

/**
 * compare - Compares head and tail indeces of a string.
 * @head: starting index from left of string.
 * @tail: starting index from right of string.
 *
 *Return: 1 if palindrome, else 0.
 */

int compare(char *head, char *tail)
{
	if (head >= tail) /* verify pointer position */
	{
		return (1);
	}
	else if (*head == *tail)
	{
		return (compare(head + 1, tail - 1)); /* compare next h/t string chars */
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - checks is a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if s is a palindrome, else 0.
 */

int is_palindrome(char *s)
{
	int len = s_len(s); /* get string length */

	return (compare(s, (s + len - 1))); /* pass h/t pointers to compare */
}
