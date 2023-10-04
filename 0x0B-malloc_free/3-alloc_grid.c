#include "main.h"
#include <stdlib.h>

/**
 * alloc_grd - nested loop to make grid.
 * @width: input   width;
 * @height:  input  height;
 * Return: pointer t 2 dim. array;
 */


int **alloc_grd(int width, int height)
{
	int **mai;
	int m, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mai = malloc(sizeof(int *) * height);

	if (mai == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		mai[m] = malloc(sizeof(int) * width);

		if (mai[m] == NULL)
		{
			for (; m >= 0; m--)
				free(mai[m]);
			free(mai);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
	{
		for (y = 0; y < width; y++)
			mai[m][y] = 0;
	}

	return (mai);
}
