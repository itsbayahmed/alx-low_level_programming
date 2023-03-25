#include "main.h"

/**
* print_triangle - A function thatprint triangles
*
*@size: The size of the triangle.
*
* Return: void.
*/
void print_triangle(int size)
{
	int a;
	int b;

	if (size <= 0)
		_putchar('\n');

	for (a = 1; a <= size; a++)
	{
		for (b = a; b < size; b++)
		{
			_putchar(' ');
		}
		for (b = 1; b <= a; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
