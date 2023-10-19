#include <stdio.h>

/**
 * hare - Print string before main func is executed
 */
void __attribute__((constructor)) hare(void);
void hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
