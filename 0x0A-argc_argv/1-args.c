#include <stdio.h>
/**
 *  * main - main funct
 *   * @argc: param count
 *    * @argv: param poiter
 *     * Return: int
 */
int main(int argc, char *argv[])
{
	(void) argv; /*dont use this ignore*/
	printf("%d\n", argc - 1);
	return (0);
}
