/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fliraud- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 11:28:48 by fliraud-          #+#    #+#             */
/*   Updated: 2025/08/23 11:49:39 by fliraud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv)
{
	int	arr[16];
	int	i;
	int	j;
	int	error;

	i = 0;
	j = 0;
	error = 0;
	while (argv[i] != '\0' && !error)
	{
		if (!(argv[1][i] <= 52 && argv[1][i] >= 49))
			error = 1;
		else
			i++;
		if (argv[1][i]  )

		else
		i++;
	}

	if (error)
	{
		ft_error();
	}
	return (0);
}
