#include "main.h"

/**
 * find_strlen - Returns length of string.
 * @str: The input string.
 * Return: The length of the string.
 */
int find_strlen(char *str)
{
	int length = 0;

	if (*(str + length))
	{
		length++;
		length += find_strlen(str + length);
	}

	return (length);
}

/**
 * check_palindrome - Checks if it is palindrome.
 * @str: The input string.
 * @length: The length of string.
 * @index: The index of string checked.
 *
 * Return: If the string palindrome - 1.
 *         If the string not palindrome - 0.
 */
int check_palindrome(char *str, int length, int index)
{
	if (str[index] == str[length / 2])
		return (1);

	if (str[index] == str[length - index - 1])
		return (check_palindrome(str, length, index + 1));

	return (0);
}
/**
 * is_palindrome - function checks if a string is a palindrome
 * @s: the input string
 * Return: If palindrome - 1
 *         If not palindrome - 0
 */
int is_palindrome(char *s)
{
	int value = 0;
	int length = find_strlen(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, length, value));
}
