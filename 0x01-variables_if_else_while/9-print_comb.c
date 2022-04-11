#include <stdio.h>
/**
 *main - containing fuction
 *Return: 0 when successful
 */

int main(void)
{
int s;

for (s = 48; s < 58; s++)
{
putchar(s);
if (s == 57)
{
break;
}

putchar(',');
putchar(' ');

}
putchar('\n');

return (0);
}
