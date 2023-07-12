#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dim array of intergers.
 * @w: int
 * @h: int
 * Return: 2d array
*/

int **alloc_grid(int w, int h)
{
	int **tab, i, j;

	tab = malloc(sizeof(*tab) * h);

	if (w <= 0 || h <= 0 || tab == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < h; i++)
		{
			tab[i] = malloc(sizeof(**tab) * w);
			if (tab[i] == 0)
			{
				/*Free everything if malloc fails*/
				while (i--)
					free(tab[i]);
				free(tab);
				return (NULL);
			}

			for (j = 0; j < w; j++)
				tab[i][j] = 0;
		}
	}
	return (tab);
}
