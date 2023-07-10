#include <stdio.h>
#include "main.h"
/**
*main- prints it's own name then take new line.
*@argc: counting no of arguments
*@argv: array of arguments
*
* Return: Always 0 (Sucess)
*/
int main(int argc, char **argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
