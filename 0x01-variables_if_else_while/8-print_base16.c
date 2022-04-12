#include <stdio.h>
/**
 * main - Prints numbers between 0 to 9 and letters between a to f
 * followed by a new line 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char a;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
