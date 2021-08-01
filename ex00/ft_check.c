/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 17:30:14 by alcierra          #+#    #+#             */
/*   Updated: 2021/08/01 17:46:50 by alcierra         ###   ########.fr       */
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
			if (arr[i] < arr[j])
				break ;
			if (j == i - 1)
				count++;
			j++;
		}
		i++;
	}
	return (count);
}
