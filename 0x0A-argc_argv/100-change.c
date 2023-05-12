#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * @argc: count of line arguments.
 * @argv: vector array of arguments.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;
	char e[] = "Error";

	if (argc == 1 || argc > 2)
	{
		printf("%s\n", e);
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		switch (cents)
		{
			case 25:
				cents -= 25;
				break;
			case 10:
				cents -= 10;
				break;
			case 5:
				cents -= 5;
				break;
			case 2:
				cents -= 2;
				break;
			case 1:
				cents -= 1;
				break;
			default:
				printf("Invalid amount\n");
				return (1);
		}

		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}
