/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:47:27 by mbauer            #+#    #+#             */
/*   Updated: 2025/10/22 16:29:38 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

t_data *ft_🧮(void)
{
	t_data	*data;

	data = ft_calloc(1, sizeof(t_data));
	if (!data)
	{
		free(data);
		exit(1);
	}
	data->image = ft_calloc(1, sizeof(mlx_image_t));
	if (!data->image)
	{
		free(data->image);
		free(data);
		exit(1);
	}
	// data->c = ft_calloc(1, sizeof(t_complex_num));
	// if (!data->c)
	// {
	// 	free(data->c);
	// 	free(data);
	// 	exit(1);
	// }
	data->zoom = 1.0;
    data->almond_x = 0.0;
    data->bread_y = 0.0;
	return (data);
}

void	ft_hook(void *param)
{
	mlx_t	*mlx;

	mlx = param;

	if (mlx_is_key_down(mlx, MLX_KEY_ESCAPE))
		mlx_close_window(mlx);
}

void	ft_scroll_hook(double scroll_x, double scroll_y, void *param)
{
	t_data	*data;

	data = param;
	(void)scroll_x;
	if (scroll_y > 0)
		data->zoom *= 1.4;
	else if (scroll_y < 0)
		data->zoom /= 1.4;
	render_surrender(data);
}

void	fill_screen(t_data *data)
{
	t_color farbiger;
	
	int x = 0;
	int y = 0;
	// pixels->coordinate_y = 0;
	// pixels->coordinate_x = 0;
	data->image = mlx_new_image(data->mlx, WIDTH, HEIGHT);
	mlx_image_to_window(data->mlx, data->image, x, y);
	farbiger.alpha = 255;
	farbiger.blue = 255;
	farbiger.red = 0;
	farbiger.green = 0;
	while (y < HEIGHT)
	{
		x = 0;
		while (x < WIDTH)
		{
			mlx_put_pixel(data->image, x,
				y, farbiger.color);
			x++;
		}
		y++;
	}
}

int	main(/*int argc, char **argv*/)
{
	t_data	*data;

	mlx_set_setting(MLX_STRETCH_IMAGE, true);
	data = ft_🧮();
	data->mlx = mlx_init(WIDTH, HEIGHT, "fractol", false);
	// fill_screen(data);
	render_surrender(data);
	mlx_loop_hook(data->mlx, ft_hook, data->mlx);
	mlx_scroll_hook(data->mlx, ft_scroll_hook, data);
	mlx_loop(data->mlx);
	//mlx_delete_image(data->mlx, data->image);
	return (0);
}
