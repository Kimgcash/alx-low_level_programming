#include "main.h"

/**
 * main - prints putchar
 *
 * Description: print Putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
