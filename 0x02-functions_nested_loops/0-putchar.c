#include "main.h"
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	char m[] = "main.h";
	int s = sizeof(m);
	int i;

	for (i = 0; i < s; i++)
	{
		_putchar(m[i]);
	}

	_putchar('\n');
	return (0);
}
