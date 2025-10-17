/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:47:27 by mbauer            #+#    #+#             */
/*   Updated: 2025/10/17 16:24:22 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	ft_🧮(t_data *data)
{
	data->image = ft_calloc(1, sizeof(t_image));
	data->image->pixels = ft_calloc(1, sizeof(t_pixel));
	if (!data->image || !data->image->pixels)
	{
		if (data->image)
			free(data->image);
		free(data);
		exit(1);
	}
}
void	ft_hook(void *param)
{
	mlx_t	*mlx;

	mlx = param;

	if (mlx_is_key_down(mlx, MLX_KEY_ESCAPE))
		mlx_close_window(mlx);
}

void	fill_screen(t_data *data, t_pixel *pixels)
{
	t_color farbiger;
	
	pixels->coordinate_y = 0;
	pixels->coordinate_x = 0;
	data->image->img = mlx_new_image(data->mlx, WIDTH, HEIGHT);
	mlx_image_to_window(data->mlx, data->image->img, pixels->coordinate_x, pixels->coordinate_y);
	farbiger.alpha = 255;
	farbiger.blue = 255;
	farbiger.red = 0;
	farbiger.green = 0;
	while (pixels->coordinate_y < HEIGHT)
	{
		pixels->coordinate_x = 0;
		while (pixels->coordinate_x < WIDTH)
		{
			mlx_put_pixel(data->image->img, pixels->coordinate_x,
				pixels->coordinate_y, farbiger.colors);
			pixels->coordinate_x++;
		}
		pixels->coordinate_y++;
	}
}

int	main(/*int argc, char **argv*/)
{
	t_data	*data;

	mlx_set_setting(MLX_STRETCH_IMAGE, true);
	data = ft_calloc(1, sizeof(t_data));
	if (!data)
		exit(STDERR_FILENO);
	ft_🧮(data);
	data->mlx = mlx_init(WIDTH, HEIGHT, "fractol", false);
	
	fill_screen(data, data->image->pixels);
	mlx_loop_hook(data->mlx, ft_hook, data->mlx);
	mlx_loop(data->mlx);
	mlx_delete_image(data->mlx, data->image->img);
	return (0);
}

