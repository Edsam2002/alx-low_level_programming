#include <stdio.h>
/**
 *main - containing function
 *Return: 0 when successsful
 */

int main(void)
{
	int s;
	int e;

	for (s = 48; s < 58; s++)
	{
	for (e = 48; e < 58; e++)
	{
	if (s != e; &&s < e)
	{
	putchar(s);
	putchar(e);
	if (e == 57 && s == 56)
	{
	break;
	}

	putchar(',');
	putchar(' ');

	}
	}
	}

	putchar('\n');

	return (0);
}
