#include <stdio.h>
#include "main.h"
/*
 *main -prints its name, followed by a new line.
 *@argc: counting no of arguments.
 *@argv: array of arguments.
 *
 *Return: Alwas 0 (sucess)
*/
int main(int argc, char **argv[])
{
  printf("%s\n",*argv[0]);
  return (0);
}
