#include <stdio.h>
/**
 * main - print the number of arguments
 * @argc: count arguments
 * @arcv: arguments
 *
 * Return:always 0 (success)
 */
int main (int argc, char *argv[])
{
	(void) argv; /*dont use this ignore*/
	printf("%d\n", argc - 1);
	return 0;
}	
