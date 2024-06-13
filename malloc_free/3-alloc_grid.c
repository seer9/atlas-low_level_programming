#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - pointer to a 2 dimensional array of integers.
 *
 * @width: given width
 * @height: given height
 *
 * Return: returns NULL
 */

int **alloc_grid(int width, int height)
{
	int **arr = malloc(sizeof(int *) * height);
	int i, j;

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
