#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: count of arguments
 * @argv: vector array with the arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int mult, i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mult = 1;

		for (i = 1; i < 3; i++)
			mult *= atoi(argv[i]);

		printf("%d\n", mult);
	}

	return (0);
}
