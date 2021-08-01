/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 22:17:35 by alcierra          #+#    #+#             */
/*   Updated: 2021/08/01 21:16:28 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_print_matrix(int **arr, int rows, int columns);
int		ft_check_left(int *arr, int num);
int		ft_check_right(int *arr, int num);
int		ft_check_up(int **m, int j, int num);
int		ft_check_down(int **m, int j, int num);

int	*g_params;
int	**g_matrix;

int	ft_check(void)
{
	int	i;
	int	j;

	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			if (g_matrix[i][j] == 0)
				return (0);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < 5)
	{
		if (ft_check_left(*(g_matrix + i) + 1, 4) != *(*(g_matrix + i)))
			return (0);
		if (ft_check_right(*(g_matrix + i) + 1, 4) != *(*(g_matrix + i) + 5))
			return (0);
		i++;
	}
	j = 1;
	while (j < 5)
	{
		if (ft_check_up(g_matrix, j, 4) != *(*g_matrix + j))
			return (0);
		if (ft_check_down(g_matrix, j, 4) != *(*(g_matrix + 5) + j))
			return (0);
		j++;
	}
	return (1);
}

int	ft_is_able_num(int num, int i, int j)
{
	int	row;
	int	column;

	if (g_matrix[i][j] != 0)
		return (0);
	row = 1;
	while (row < 5)
	{
		if (g_matrix[row][j] == num)
			return (0);
		row++;
	}
	column = 1;
	while (column < 5)
	{
		if (g_matrix[i][column] == num)
			return (0);
		column++;
	}
	return (1);
}

void	rush_req(void)
{
	int	i;
	int	j;
	int	num;

	i = 1;
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			if (g_matrix[i][j] == 0)
			{
				num = 1;
				while (num <= 4)
				{
					if (ft_is_able_num(num, i, j))
					{
						g_matrix[i][j] = num;
						if (i == 4 && j == 4)
						{
							if (ft_check() > 0)
							{
								ft_print_matrix(g_matrix, 5, 5);
								return ;
							}
						}
						rush_req();
						g_matrix[i][j] = 0;
					}
					num++;
				}
				return ;
			}
			j++;
		}
		i++;
	}
}

void	ft_set_params(void)
{
	int	i;
	int	div;
	int	mod;

	i = 0;
	while (i < 16)
	{
		div = i / 4;
		mod = i % 4;
		if (div == 0)
			g_matrix[0][mod + 1] = g_params[i];
		else if (div == 1)
			g_matrix[5][mod + 1] = g_params[i];
		else if (div == 2)
			g_matrix[mod + 1][0] = g_params[i];
		else
			g_matrix[mod + 1][5] = g_params[i];
		i++;
	}
}

void	rush(int *params)
{
	int	i;
	int	j;

	i = 0;
	g_matrix = malloc(6 * sizeof(int *));
	while (i < 6)
	{
		g_matrix[i] = malloc(6 * sizeof(int));
		j = 0;
		while (j < 6)
		{
			g_matrix[i][j] = 0;
			j++;
		}
		i++;
	}
	g_params = params;
	ft_set_params();
	rush_req();
}
