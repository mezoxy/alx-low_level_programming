#include <stdio.h>
void before_fun(void) __attribute__((constructor));
/**
 * before_fun - A function that prints
 */
void before_fun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
