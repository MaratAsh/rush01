/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 22:24:25 by alcierra          #+#    #+#             */
/*   Updated: 2021/07/31 22:41:19 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_matrix(int **matrix, int rows, int columns)
{
	int	i;
	int	j;
	char	c;

	i = 0;
	while (i < rows)
	{
		j = 0;
		while (j < columns)
		{
			c = '0' + matrix[i][j];
			write(1, &c, 1);
			if (j != columns - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
