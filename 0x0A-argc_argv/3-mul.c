#include <stdio.h>
#include <stdlib.h>
/**
 * main -  print the result of the multiplication, followed by a new line
 * @argc: counter
 * @argv : value
 * Return: 0 Success
 */

int main(int argc, char **argv)
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
		return (1);
	}
	else
	printf("Error\n");
	return (0);
}
