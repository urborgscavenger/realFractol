/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:11:08 by mbauer            #+#    #+#             */
/*   Updated: 2025/10/22 18:06:39 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

static void	print_err(void)
{
 	ft_putstr_fd("Das ist ochsenkot...\n", 1);
}

int	parse_args(int argc, char **argv, t_data *data)
{
	if (argc < 2 || argc > 4)
	{
		print_err();
		free_all(data);
		return (0);
	}
	else if (ft_strncmp(argv[1], "Mandelbrot", 11)
		|| ft_strncmp(argv[1], "mandelbrot", 11))
		data->fractal_type = &almondbread;
	else if (ft_strncmp(argv[1], "Julia", 6)
		|| ft_strncmp(argv[1], "julia", 6))
		data->fractal_type = &juliet;
	else
	{
		print_err();
		free_all(data);
		return (0);
	}
	return (1);
}

void	free_all(t_data *data)
{
	free(data->mlx);
	free(data->image);
	free(data);
	exit(1);
}
