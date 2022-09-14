#include "main.h"

/**
 * main - check Description
 *
 * Description: write a program that prints putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *sh = "kimgcash";


	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
