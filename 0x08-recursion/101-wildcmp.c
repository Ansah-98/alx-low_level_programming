#include "main.h"

/**
 * strlen_no_wilds - prints string in reverse
 * @str: string
 *
 * Description: damn
 *
 * Return: nothing
 */
int strlen_no_wilds(char *str)
{
	int len = 0, index = 0;

	if (*(str + index))
	{
		if (*str != '*')
			len++;
		index++;
		len += strlen_no_wilds(str + index
	}

	return (len);
}
/**
 * iterate_wild - get square root of a number recursively
 * @wildstr: number
 *
 * Description: dont care
 *
 * Return: square root or -1
 *
 */

void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}
/**
 * postfix_match - Checks if a string is a palindrome.
 * @str: The string to be checked.
 * @postfix: dont know really what happening
 *
 * Return: If the string is a palindrome - 1.
 *       If the string is not a palindrome - 0.
 */
char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str) - 1;
	int postfix_len = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);
	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}
	return (postfix);
}


/**
 * wildcmp - Compares two strings, considering wildcard characters.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared - may contain wildcards.
 *
 * Return: If the strings can be considered identical -
 *	Otherwise - 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
