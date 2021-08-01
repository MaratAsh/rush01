/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 21:31:06 by alcierra          #+#    #+#             */
/*   Updated: 2021/08/01 21:37:45 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_left(int *arr, int num);
int	ft_check_right(int *arr, int num);
int	ft_check_up(int **matrix, int j, int num);
int	ft_check_down(int **matrix, int j, int num);

int	ft_check_empty(int **matrix)
{
	int	i;
	int	j;

	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			if (matrix[i][j] == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check(int **matrix)
{
	int	i;
	int	j;

	if (ft_check_empty(matrix) == 0)
		return (0);
	i = 1;
	while (i < 5)
	{
		if (ft_check_left(*(matrix + i) + 1, 4) != *(*(matrix + i)))
			return (0);
		if (ft_check_right(*(matrix + i) + 1, 4) != *(*(matrix + i) + 5))
			return (0);
		i++;
	}
	j = 1;
	while (j < 5)
	{
		if (ft_check_up(matrix, j, 4) != *(*matrix + j))
			return (0);
		if (ft_check_down(matrix, j, 4) != *(*(matrix + 5) + j))
			return (0);
		j++;
	}
	return (1);
}
