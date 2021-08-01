/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 22:16:06 by alcierra          #+#    #+#             */
/*   Updated: 2021/08/01 17:46:55 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	rush(int *str);
void	ft_print_matrix(int **arr, int rows, int columns, int start_, int start_c);
int	*ft_params_converter(char *str);
int	ft_check_left(int *arr, int num);

int	main(int argc, char **argv)
{
	int	*params;
	argv++;
	argc--;
	
	if (argc != 1)
		return (0);
	params = ft_params_converter(*argv);
	//
	int	i;
	i = 0;
	printf("{ ");
	while (i < 16)
	{
		printf("%d, ", params[i]);
		i++;
	}
	printf("\n");
	//
	//rush(params);
	printf("\n%d ", ft_check_left(params, 4));
}
