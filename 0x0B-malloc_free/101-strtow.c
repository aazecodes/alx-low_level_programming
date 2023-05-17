#include "main.h"
#include <stdlib.h>
#include<stdio.h>
/**
* word_count - function to get word count of string
* @str: string
* Return: string
*/
int word_count(char *str)
{
	int count = 0, word = 0;

		while (*str)
		{
			if (*str != ' ' && !word)
			{
				word = 1;
				count++;
			}
			else if (*str == ' ')
			{
				word = 0;
			}
		str++;
		}
	return (count);
}
/**
* word_length - function to get length of string
* @str: string
* Return: string
*/
int word_length(char *str)
{
	int length = 0;

	while (*str && *str != ' ')
	{
		length++;
		str++;
	}
	return (length);
}
/**
* strtow - function that splits a string into words.
* @str: string
* Return: string
*/
char **strtow(char *str)
{
	int num, j = 0, index = 0, length = 0, letter = 0;
	char **words, *alph;

	if (str == NULL || *str == '\0')
		return (NULL);
	num = word_count(str);
	words = (char **)malloc((num + 1) * sizeof(char *));
		if (words == NULL)
			return (NULL);
	while (*str)
	{
		if (*str != ' ' && !letter)
		{
			letter = 1;
			length = 1;
		}
	else if (*str != ' ' && letter)
	{
		length++;
	}
	else if (*str == ' ' && letter)
	{
		letter = 0;
		words[index] = (char *)malloc((length + 1) * sizeof(char));
			if (words[index] == NULL)
			{
				for (j = 0; j < index; j++)
					free(words[j]);
				free(words);
			return (NULL);
			}
	alph = words[index];
		while (length--)
		{
			*alph++ = *(str - length - 1);
		}
	*alph = '\0';
	index++;
	}
	str++;
	}
	if (letter)
	{
		words[index] = (char *)malloc((length + 1) * sizeof(char));
		if (words[index] == NULL)
		{
			for (j = 0; j <= index; j++)
				free(words[j]);
			free(words);
		return (NULL);
		}
	alph = words[index];
		while (length--)
		{
			*alph++ = *(str - length - 1);
		}
	*alph = '\0';
	index++;
	}
	words[index] = NULL;
	return (words);
	}
