#include "main.h"
/**
 * main - Copies content of file to another file
 * @argc: int
 * @argv: double pointer
 * Return: Copy of file
 */

int main(int argc, char **argv)
{
	char size[1024];
	int check, check1, check2;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	check = open(argv[1], O_RDONLY);
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	check1 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (check1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((check2 = read(check, size, 1024)) > 0)
	{
		if (check2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		check2 = write(check1, size, check2);
		if (check2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (check2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(check) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", check), exit(100);
	if (close(check1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", check1), exit(100);

	return (0);
}
