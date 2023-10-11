#include <stdlib.h>

#include <stdio.h>

/**
 * main - print it's  opcodes.
 *
 * @argv: arrays of argument.
 *
 * @argc: numbr of argument.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	char *arr;

	int byte, m;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (m = 0; m < byte; m++)
	{
		if (m == byte - 1)
		{

			printf("%02hhx\n", arr[m]);

			break;
		}

		printf("%02hhx ", arr[m]);
	}
	return (0);
}
