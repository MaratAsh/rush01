/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 22:16:06 by alcierra          #+#    #+#             */
/*   Updated: 2021/07/31 22:46:17 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	rush(char *str);
void	ft_print_matrix(int **arr, int rows, int columns);

int	main(int argc, char **argv)
{
	argv++;
	argc--;
	
	if (argc != 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	rush(argv[0]);
}
