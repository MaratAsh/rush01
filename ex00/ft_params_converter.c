/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_params_converter.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 10:27:06 by alcierra          #+#    #+#             */
/*   Updated: 2021/08/03 15:32:17 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_params_converter(char *str)
{
	int	*arr;
	int	i;

	arr = (int *) malloc(sizeof(int) * 16);
	if (arr != NULL)
	{
		i = 0;
		while (i < 16)
		{
			if (str[i * 2] >= '1' && str[i * 2] <= '4')
			{
				arr[i] = str[i * 2] - '0';
			}
			else
			{
				free(arr);
				return (NULL);
			}
			i++;
		}
	}
	if (arr[i] != '\0')
		return (NULL);
	return (arr);
}
