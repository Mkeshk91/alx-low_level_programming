#include <stdio.h>
#include "main.h"
/**
 *main -  prints all arguments it receives every one in seperate line
 *@argc: counter
 *@argv: value
 *
 *Return: 0 = Success
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
		}
	return (0);
}
