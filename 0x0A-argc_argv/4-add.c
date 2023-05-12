#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: counts of arguments.
 * @argv: array that contains the arguments.
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int num, num1, addnum = 0;
	char e[] = "Error";


	for (num = 1; num < argc; num++)
	{
		for (num1 = 0; argv[num][num1] != '\0'; num1++)
		{
			if (!isdigit(argv[num][num1]))
			{
				printf("%s\n", e);
				return (1);
			}
		}
		addnum += atoi(argv[num]);
	}
	printf("%d\n", addnum);
	return (0);
}
