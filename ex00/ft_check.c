/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 17:30:14 by alcierra          #+#    #+#             */
/*   Updated: 2021/08/01 21:04:29 by tandrea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_check_left(int *arr, int num)
{
	int	i;
	int	j;
	int	count;

	count = 1;
	i = 0;
	while (i < num)
	{
		j = 0;
		while (j < i)
		{
			if (arr[i] <= arr[j])
				break ;
			if (j == i - 1)
				count++;
			j++;
		}
		i++;
	}
	return (count);
}

int	ft_check_right(int *arr, int num)
{
	int	i;
	int	j;
	int	count;

	count = 1;
	i = num - 1;
	while (i >= 0)
	{
		j = num - 1;
		while (j > i)
		{
			if (arr[i] <= arr[j])
				break ;
			if (i == j - 1)
				count++;
			j--;
		}
		i--;
	}
	return (count);
}

int	ft_check_up(int **matrix, int j, int num)
{
	int	i1;
	int	i2;
	int	count;

	i1 = 1;
	count = 1;
	while (i1 <= num)
	{
		i2 = 1;
		while (i2 < i1)
		{
			if (matrix[i1][j] <= matrix[i2][j])
				break ;
			if (i2 == i1 - 1)
				count++;
			i2++;
		}
		i1++;
	}
	return (count);
}

int	ft_check_down(int **matrix, int j, int num)
{
	int	i1;
	int	i2;
	int	count;

	count = 1;
	i1 = num;
	while (i1 > 0)
	{
		i2 = num;
		while (i2 > i1)
		{
			if (matrix[i1][j] <= matrix[i2][j])
				break ;
			if (i1 == i2 - 1)
				count++;
			i2--;
		}
		i1--;
	}
	return (count);
}

int	ft_check(int **g_matrix)
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