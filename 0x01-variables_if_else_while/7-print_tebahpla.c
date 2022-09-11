#include <stdio.h>

/**
 * main - prints lowercase alphabets in reverse 10
 *
 * Return: 0 to exit program
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
