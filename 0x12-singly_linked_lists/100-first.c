#include <stdio.h>
/**
 * myStartUpFunc - prints before main
 * Return: void
 * __attribute__ ((constructor)) - executes before main
 */
void myStartUpFunc(void) __attribute__((constructor));

void myStartUpFunc(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
