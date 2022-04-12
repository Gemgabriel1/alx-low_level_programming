#include <stdio.h>
/**
 * main - Reurn all alphabet in lowercase except q adn e
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
