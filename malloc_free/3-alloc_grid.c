#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to the 2 dimensional array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
int **grid; int index1, index2;

    if (width <= 0 || height <= 0)
    {
        return NULL;
    }
   
   grid = malloc(sizeof(int *) * height);
        if (grid == NULL)
        {
            return NULL;
        }
    for (index1 = 0; index1 < height; index1++)
    {
        grid[index1] = malloc(sizeof(int) * width);
        if (grid[index1] == NULL)
        {
            for (index2 = 0; index2 < index1; index2++)
            {
                free(grid[index2]);
            }
            free(grid);
            return NULL;
        }
        for (index2 = 0; index2 < width; index2++)
        {
            grid[index1][index2] = 0;
        }
    }
    return grid;
}