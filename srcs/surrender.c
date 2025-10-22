/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   surrender.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:28:02 by mbauer            #+#    #+#             */
/*   Updated: 2025/10/22 14:38:56 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

// 3.0 = (1.0 - (-2.0))

double map_x_to_a(int x)
{
    return -2.0 + (3.0 * x / (double)WIDTH);
}

// 3.0 = (1.5 - (-1.5))

double map_y_to_b(int y)
{
    return -1.5 + (3.0 * y / (double)HEIGHT);
}

unsigned int get_color(int iter)
{
    if (iter == MAX_ITER)
        return 0x000000FF; // Schwarz = Teil der Menge
    double t = (double)iter / MAX_ITER;
    int r = (int)(9 * (1 - t) * t * t * t * 255);
    int g = (int)(15 * (1 - t) * (1 - t) * t * t * 255);
    int b = (int)(8.5 * (1 - t) * (1 - t) * (1 - t) * t * 255);
    return (r << 24 | g << 16 | b << 8 | 0xFF);
}

//mownay == howmany (iterations)
void    render_surrender(t_data *data)
{
    int x;
    int y;
    unsigned int color;
    int mownay;

    x = 0;
    y = 0;
    color = 0x000000ff;
    mownay = 0;
    data->image = mlx_new_image(data->mlx, WIDTH, HEIGHT);
    mlx_image_to_window(data->mlx, data->image, 0, 0);
    while(y < HEIGHT)
    {
        while(x < WIDTH)
        {
            mownay = almondbread(map_x_to_a(x), map_y_to_b(y));
			color = get_color(mownay);
            mlx_put_pixel(data->image, x, y, color);
            x++;
        }
        x = 0;
        y++;
    }
    // almondbread(data);
}
