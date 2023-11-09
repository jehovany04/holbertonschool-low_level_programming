#include "3-alloc_grid.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/** Vérifie si la largeur ou la hauteur est invalide**/
	if (width <= 0 || height <= 0)
	{
		return (NULL); /** Retourne NULL pour une largeur ou hauteur invalide**/
	}

	/** Alloue de la mémoire pour les lignes du tableau 2D**/
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL); /** Retourne NULL si l'allocation pour les lignes échoue**/
	}

	/** Alloue mémoire for each colonne et initialise éléments à 0**/
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/** Libère mémoire allouée en cas d'échec d'allocation for colonnes**/
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}

		/** Initialise chaque élément de la colonne à 0**/
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid); /** Retourne pointeur vers tableau 2D alloué **/
}
