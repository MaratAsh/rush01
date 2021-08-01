/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 22:16:06 by alcierra          #+#    #+#             */
/*   Updated: 2021/08/01 21:55:47 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	rush(int *str);
int	*ft_params_converter(char *str);
int	ft_check_left(int *arr, int num);
int	ft_check_right(int *arr, int num);

int	main(int argc, char **argv)
{
	int	*params;

	argv++;
	argc--;
	if (argc != 1)
		return (0);
	params = ft_params_converter(*argv);
	if (params == NULL)
		return (0);
	if (rush(params) == 0)
		write(1, "Error\n", 6);
}
