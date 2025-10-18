/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   almondbread.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 22:09:49 by mbauer            #+#    #+#             */
/*   Updated: 2025/10/18 23:09:00 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int	almondbread(t_data *data)
{
	//t_color colors;
	double	x;
	double	y;
	int		iteration;

	x = 0;
	y = 0;
	iteration = 0;
	data = (void *)data;
	while (pow(x, x) + pow(y, y) <= 4 && iteration < MAX_ITER)
	{
		// colors.alpha = 255;
		// colors.red = (iteration * 5) % 256;
		// colors.green = (iteration * 15) % 256;
		// colors.blue = (iteration * 25) % 256;
		// mlx_put_pixel(data->image, x, y, colors.color);
		// x++;
		// if (x >= WIDTH)
		// {
		// 	x = 0;
		// 	y++;
		// }
		// if (y >= HEIGHT)
		// 	break ;
		
		iteration++;
	}
	return iteration;
}
