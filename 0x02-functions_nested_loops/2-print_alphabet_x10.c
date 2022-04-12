#include "main.h"

/**
 *print_alphabet - print alphabet lowercase
 *
 *Return: ALways 0.
 */

void print_alphabet_x10(void)
{
	int num_alphabet;
	char alphabet;

	for (num_alphabet = 0; num_alphabet < 10; num_alphabet++)
	{
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
  	_putchar(alphabet);
	}

	_putchar('\n')
	}
}
