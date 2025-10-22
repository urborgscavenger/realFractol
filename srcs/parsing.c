/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:11:08 by mbauer            #+#    #+#             */
/*   Updated: 2025/10/22 16:48:49 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int	parsing(int argc, char **argv, t_data *data)
{
	if (argc < 2 || argc > 4)
	{
		print_parameters();
		error_handle(data);
	}
	else if (ft_strncmp(argv[1], "Mandelbrot", 11)
		|| ft_strncmp(argv[1], "mandelbrot", 11))
		mbrot(data);
	else if (ft_stncmp(argv[1], "Julia", 6)
		|| ft_strncmp(argv[1], "julia", 6))
		julia(data, argv);
	else
	{
		free_all(data);
	}
}

void	free_all(t_data *data)
{
	free(data->mlx);
	free(data->image);
	free(data);
	exit(1);
}

// void print_parameters(void)
// {
// 	ft_putstr_fd("Benutzt:\n", 1);
// 	ft_printf("./fractol mandelbrot\n");
// 	ft_printf("./fractol julia <real_part> <imaginary_part>\n");
// }
