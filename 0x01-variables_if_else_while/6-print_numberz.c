#include <stdio.h>

/**
 * main - prints all single number in base 10
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
