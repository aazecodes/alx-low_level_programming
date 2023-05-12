#include <stdio.h>
/**
 * main - program that prints all arguments it receives
 * @argc: count of arguments
 * @argv: vector array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
	printf("%s\n", argv[arg]);
	return (0);
}
