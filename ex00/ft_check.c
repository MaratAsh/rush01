/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 17:30:14 by alcierra          #+#    #+#             */
/*   Updated: 2021/08/01 19:59:10 by tandrea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int ft_check_right(int *arr, int num)
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

int	ft_check_up(int **matrix, int num)
{
	int	i1;
	int	i2;
	int	j;
	int	count;
	
	i1 = 0;
	count = 1;
	while (i1 < num)
	{
		j = 0;
		while (j < num)
		{
			i2 = 0;
			while (i2 <= i1)
			{
				if (matrix[i1][j] <= matrix[i2][j])
					break ;
				if (i2 == i1 - 1)
					count++;
				i2++;
			}
			j++;
		}
		i1++;
	}
	return (count);
}

int	ft_check_down(int **matrix, int num)
{
	int	i1;
	int	i2;
	int	j;
	int	count;

	i1 = num - 1;
	count = 1;
	while (i1 < num)
	{
		j = 0;
		while (j < num)
		{
			i2 = num - 1;
			while (i2 >= i1)
			{
				if (matrix[i1][j] <= matrix[i2][j])
					break ;
				if (i1 == i2 - 1)
					count++;
				i2--;
			}
			j++;
		}
		i1--;
	}
	return (count);
}
