#include <stdio.h>

/**
 * main - prints all single numbers of base 10
 *
 * Return: 0 to exit program
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
