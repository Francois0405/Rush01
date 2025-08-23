/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printarray.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 10:54:21 by andrgarc          #+#    #+#             */
/*   Updated: 2025/08/23 11:09:21 by andrgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printarray(int **a, int col, int row)
{
	int	i;
	int	j;

	j = 0;
	while (j < row){
		i = 0;
		while (i < col){
			write(1, &a[j][i], 1);
			write(1, " ", 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

int	main(void)
{
	int	col = 2;
	int	row = 2;

	int	a[2][2] = { {1,2}, {3,4} };
	
	ft_printarray(a, col, row);
	return(0);
}
	

		


