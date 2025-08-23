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

void	free_matriz(int **matriz, int row)
{
	int     i;

	i = 0;
	while (i < row)
	{
		free(matriz[i]);
		i++;
	}
	free(matriz[i]);
}

int**   init_matriz(int col, int row, int init)
{
	int     **matriz = (int **) malloc(row * sizeof(int*));
	int     i;
	int     j;

	i = 0;
	j = 0;
	while (i < row)
	{
		matriz[i] = (int *) malloc(col * sizeof(int));
		while (j < col)
		{
			matriz[i][j] = init;
			j++;
		}
		i++;
	}
}

