#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints its own opcodes
 * @argc: count of command-line arguments
 * @argv: array of strings that contain each command-line argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a = 0, b;
	char *s;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	s = (char *) main;
	while (a < b)
	{
		if (a == b - 1)
		{
			printf("%02hhx\n", s[a]);
			break;
		}
		printf("%02hhx ", s[a]);
		a++;
	}
	return (0);
}
