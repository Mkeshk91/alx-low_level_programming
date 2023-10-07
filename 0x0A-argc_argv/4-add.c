#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there is a digit.
 *
 * @st: array st.
 * Return: 0 (Success)
 */

int check_num(char *st)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(st)) /*counts  string*/

	{
		if (!isdigit(st[count])) /*checks if st there is a digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}


/**
 * main - Prints  name of  program.
 *
 * @argc: Count arguments.
 *
 * @argv: arguments,
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int count;
	int st_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*Go through  whole array*/
	{
		if (check_num(argv[count]))

		{
			st_to_int = atoi(argv[count]); /*ATOI --> convert the  string to int*/

			sum += st_to_int;
		}

		/*Condition if one of  numbers contain symbols that are'nt digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*print the sum*/

	return (0);
}
