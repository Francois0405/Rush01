/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_malloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ervillca <ervillca@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 00:14:22 by ervillca          #+#    #+#             */
/*   Updated: 2025/08/24 00:21:28 by ervillca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

extern void ft_printarray();

/*
* free_matriz
* Free all memory spaces occupied by a matrix
*/
void	free_matriz(int **matriz, int row)
{
	int     i;

	i = 0;
	while (i < row)
	{
		free(matriz[i]);
		i++;
	}
	free(matriz);
}

/*
* init_matriz
* Inicialize the matrix to an Int value, reserves space in memory (malloc)
*/

int**   init_matriz(int col, int row, int init)
{
	int     **matriz = malloc(row * sizeof(int*));
	int     i;
	int     j;

	i = 0;
	while (i < row)
	{
		j = 0;
		matriz[i] = malloc(col * sizeof(int));
		while (j < col)
		{
			matriz[i][j] = init;
			j++;
		}
		i++;
	}
	return (matriz);
}

int main(void)
{
	int **ma;

	ma = init_matriz(4, 4, 0);

	ft_printarray(ma, 4, 4);

	free_matriz(ma, 4);
}
