#include <stdio.h>

/**
*main - entry
*Return: (0) if successful
*/

int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
		putchar('0' + x);
	}
	putchar('\n');
	return (0);
}