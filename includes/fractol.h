/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:46:48 by mbauer            #+#    #+#             */
/*   Updated: 2025/10/18 16:52:05 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "../Libft/libft.h"
# include <MLX42.h>
# include <math.h>
# include <stdlib.h>

# define JULIA 2
# define MBROT 0

# define WIDTH 1920
# define HEIGHT 1080

# define MAX_ITER 100

typedef union color_u
{
	struct
	{
		uint8_t	alpha;
		uint8_t	blue; //blue
		uint8_t	green; //gruuun
		uint8_t	red; //rot
	};
	uint32_t	color;
}	t_color;

typedef struct s_complex_nums
{
	double			real;
	double			imaginary;
}					t_complex_num;

//TODO Data structs refactoren

// typedef struct s_pixel
// {
// 	uint32_t		coordinate_x;
// 	uint32_t		coordinate_y;
// }					t_pixel;

typedef struct s_image
{
	mlx_image_t		*img;
	// t_pixel			*pixels;
}					t_image;

typedef struct s_data
{
	mlx_t			*mlx;
	mlx_image_t		*image;
	t_complex_num	*c;
	char			**args;
	double			in_values;
}					t_data;

int	almondbread(t_data *data);

#endif