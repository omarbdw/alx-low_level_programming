/**
 *free_grid - frees a 2 dimensional grid previously created by your alloc_grid function.
 *@grid: pointer to a pointer
 *@height: height of the grid
 *Return: void
 */
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
void free_grid(int **grid, int height){
int i;
for (i = 0; i < height; i++){
free(grid[i]);
}
free(grid);
}
