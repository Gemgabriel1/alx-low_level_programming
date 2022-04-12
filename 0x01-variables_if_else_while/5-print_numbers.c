#include <stdio.h>
/**
 * main - prints all single base 10 numbers
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	
	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf('\n');
	return (0);
}
