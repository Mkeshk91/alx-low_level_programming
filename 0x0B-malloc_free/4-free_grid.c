#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free 2d array;
 *
 * @grd: 2d grd;
 * @height: height dimension of grd;
 * Description: free memory of grd;
 * Return: -
 */

void free_grid(int **grd, int height)
{
	int m;

	for (m = 0; m < height; m++)

	{
		free(grd[m]);
	}
	free(grd);
}
