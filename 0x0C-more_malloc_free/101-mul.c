#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* positive_numb - function  to check if a given string contains only digits
* @str: string to check
* Return: 1 or 0
*/
int positive_numb(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		return (0);
		str++;
	}
	return (1);
}
/**
* multiply_strings- function  to multiply strings
* @str1: input string 1
* @str2: input string 2
* Return: 1 or 0
*/
unsigned long int multiply_strings(char *str1, char *str2)
{
	unsigned long int result = 0, base = 1, carry = 0, dig1, dig2, prod;
	int i, j, len1 = 0, len2 = 0;

	while (str1[len1])
		len1++;
	while (str2[len2])
		len2++;
	for (i = len1 - 1; i >= 0; i--)
	{
		dig1 = str1[i] - '0';
	for (int j = len2 - 1; j >= 0; j--)
	{
		dig2 = str2[j] - '0';
		prod = dig1 * dig2 + carry;
		carry = prod / 10;
		prod %= 10;
		result += prod * base;
		base *= 10;
	}
	if (carry > 0)
	{
		result += carry * base;
		base *= 10;
	}
	}
	return (result);
}
/**
* main - function thatfirst checks if the number of arguments is correct
* @argc: count of arguments
* @argv: array of arguments
* Return: 1 or 0
*/
int main(int argc, char *argv[])
{
	char *num1, *num2;
	unsigned long int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1 = argv[1], num2 = argv[2];
	if (!positive_numb(num1) || !positive_numb(num2))
	{
		printf("Error\n");
		return (98);
	}
	result = multiply_strings(num1, num2);
		printf("%lu\n", result);
	return (0);
}
