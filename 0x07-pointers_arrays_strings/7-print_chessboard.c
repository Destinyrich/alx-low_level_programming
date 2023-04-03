#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int d;
	int f;

	for (d = 0; d < 8; d++)
	{
		for (f = 0; f < 8; f++)
			_putchar(a[d][f]);
		_putchar('\n');
	}
}
