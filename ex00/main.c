/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fliraud- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 11:28:48 by fliraud-          #+#    #+#             */
/*   Updated: 2025/08/23 23:24:43 by ervillca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	free_matriz(int **matriz, int row)
{
	int	i;
	
	i = 0;
	while (i < row)
	{
		free(matriz[i]);
		i++;
	}
	free(matriz[i]);
}

int**	init_matriz(int col, int row, int init)
{
	int	**matriz = (int **) malloc(row * sizeof(int*));
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < row){
		matriz[i] = (int *) malloc(col * sizeof(int));
		while (j < col)
		{
			matriz[i][j] = init;
			j++;
		}
		i++;
	}
}

void	array_char_to_matriz_int(char *array_char, int num_dim)
{
	int	matriz[num_dim][num_dim];
	int	i;
	int	j;
	int	z;
	//int	**mat =init_matriz(4, 4, 0);

	free_matriz(matriz, num_dim);
	i = 0; //recorre los char
	j = 0; //controla la cantidad de elementos anadidos al vector
	z = 0; //controla la cantidad de vectores
	while (array_char[i] != '\0')
	{
		if (array_char[i] != ' ')
		{
			matriz[j][z] = array_char[i] - '0';
			z++;
    			if (z >= num_dim)
				j++;
				z = 0;
		}
		i++;
	}
	ft_printarray(matriz, num_dim, num_dim);
	//ft_printarray(mat, num_dim, num_dim);
}

/*
void	put_table(int matriz[4][4],int num_dim)
{
	int	table[num_dim][num_dim];
	int	i;
	int	j;
	int	*put_matriz;

	put_matriz = init_vector(4, 0);
	i = 0;
	j = 0;
	while (i < num_dim)
	{
		while (j < num_dim)
		{
			if (matriz[0][0] == 1)
			{
				table[i][j] = 4;
			}
			j++;	
		}
		i++;
	}
}
*/

int	error_handler(char *arg1, int dim)
{
	int	error;
	

	if ()
}

void	putStr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	putError()
{
	char	n;

	n = '\n';
	write(1, "Error", 5);
	write(1, &n, 1);
}

int	main(int argc, char **argv)
{
	int	arr[16];
	int	i;
	int	j;
	int	error;
	char	*test = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";

		
	i = 0;
	j = 0;
	array_char_to_matriz_int(argv[1], 4);
	error = error_handler(arr, 4);
	if (error)
	{
		putError();
	}
	return (0);
}
