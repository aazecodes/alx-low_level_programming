#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc: count of arguments
 * @argv: vector array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
