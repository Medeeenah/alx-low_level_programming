#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 *
 * Return: 0 at the end of the program
 */
int main(void)
{
	char i;
	
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar((char) *"\n");
	return (0);
}
