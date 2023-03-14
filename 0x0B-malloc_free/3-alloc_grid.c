#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 * integers, elements initalized to 0.
 * @width:Is the width
 * @height: Is the height
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *   Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **_2D_array;
	int clm_index, row_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	_2D_array = malloc(sizeof(int *) * height);

	if (_2D_array == NULL)
		return (NULL);

	for (clm_index = 0; clm_index < height; clm_index++)
	{
		_2D_array[clm_index] = malloc(sizeof(int) * width);

		if (_2D_array[clm_index] == NULL)
		{
			for (; clm_index >= 0; clm_index--)
				free(_2D_array[clm_index]);

			free(_2D_array);
			return (NULL);
		}
	}

	for (clm_index = 0; clm_index < height; clm_index++)
	{
		for (row_index = 0; row_index < width; row_index++)
			_2D_array[clm_index][row_index] = 0;
	}

	return (twoD);
}
