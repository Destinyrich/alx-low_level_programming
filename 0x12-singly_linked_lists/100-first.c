#include <stdio.h>

void first(void) __attribute__((constructor));

/**
 * first - prints a sentence before the main
 * function is executed
 */
void first(void)
{
	printf("my name is destiny! and i'm a boy, who live in warri,\n");
	printf("nigerian are great!\n");
}
