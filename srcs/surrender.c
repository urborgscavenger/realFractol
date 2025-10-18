/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   surrender.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:28:02 by mbauer            #+#    #+#             */
/*   Updated: 2025/10/18 16:48:52 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void    render_surrender(t_data *data)
{
    int x;
    int y;

    x = 0;
    y = 0;
    data->image = mlx_new_image(data->mlx, WIDTH, HEIGHT);
    mlx_image_to_window(data->mlx, data->image, 0, 0);
    while(x < WIDTH)
    {
        while(y < HEIGHT)
        {
            mlx_put_pixel(data->image, x, y, 0xFFFFFFFF);
            y++;
        }
        y = 0;
        x++;
    }
    almondbread(data);
}
