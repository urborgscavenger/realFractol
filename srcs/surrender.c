/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   surrender.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:28:02 by mbauer            #+#    #+#             */
/*   Updated: 2025/10/23 16:57:20 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

// 3.0 = (1.0 - (-2.0))

double	map_x_to_almond(int x, t_data *data)
{
	return (-2.0 + (3.0 * x / (double)WIDTH) / data->zoom + data->almond_x);
}

// 3.0 = (1.5 - (-1.5))

double	map_y_to_bread(int y, t_data *data)
{
	return (-2.0 + (3.0 * y / (double)WIDTH) / data->zoom + data->bread_y);
}

// unsigned int get_color(int iter)
// {
//     if (iter == MAX_ITER)
//         return (0xBC002DFF);
//     double t = (double)iter / MAX_ITER;
//     int r = (int)(9 * (1 - t) * t * t * t * 255);
//     int g = (int)(15 * (1 - t) * (1 - t) * t * t * 255);
//     int b = (int)(8.5 * (1 - t) * (1 - t) * (1 - t) * t * 255);
//     return (r << 24 | g << 16 | b << 8 | 0xFF);
// }

unsigned int	get_color(int iter)
{
	int	r;
	int	g;
	int	b;

	if (iter == MAX_ITER)
		return (0xBC002DFF);
	double t = (double)iter / MAX_ITER * 10; // beschleunigter Zyklus
	r = (int)((sin(t * 2.0) * 0.5 + 0.5) * 255);
	g = (int)((sin(t * 3.0 + 2.0) * 0.5 + 0.5) * 255);
	b = (int)((sin(t * 4.0 + 4.0) * 0.5 + 0.5) * 255);
	return (r << 24 | g << 16 | b << 8 | 0xFF);
}

// mownay == howmany (iterations)
void	render_surrender(t_data *data)
{
	int				x;
	int				y;
	unsigned int	color;
	int				mownay;

	x = 0;
	y = 0;
	mownay = 0;
	data->image = mlx_new_image(data->mlx, WIDTH, HEIGHT);
	mlx_image_to_window(data->mlx, data->image, 0, 0);
	while (y < HEIGHT)
	{
		while (x < WIDTH)
		{
			mownay = data->fractal_type(map_x_to_almond(x, data),
					map_y_to_bread(y, data), data->args[0], data->args[1]);
			color = get_color(mownay);
			mlx_put_pixel(data->image, x, y, color);
			x++;
		}
		x = 0;
		y++;
	}
}
