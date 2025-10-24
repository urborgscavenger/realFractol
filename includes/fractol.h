/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:46:48 by mbauer            #+#    #+#             */
/*   Updated: 2025/10/23 22:42:03 by mbauer           ###   ########.fr       */
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

# define WIDTH 800
# define HEIGHT 600

# define MAX_ITER 200

typedef union color_u
{
	struct
	{
		uint8_t		alpha;
		uint8_t		blue;
		uint8_t		green;
		uint8_t		red;
	};
	uint32_t		color;
}					t_color;

typedef struct s_image
{
	mlx_image_t		*img;
}					t_image;

typedef int			(*t_fractal_func)(double x, double y, double o, double t);

// almondx = mousepos_x bread_y = mousepos_y
typedef struct s_data
{
	mlx_t			*mlx;
	mlx_image_t		*image;
	double			zoom;
	double			almond_x;
	double			bread_y;
	double			*args;
	double			in_values;
	t_fractal_func	fractal_type;
}					t_data;

int					almondbread(double almond, double bread, double o,
						double t);
int					juliet(double almond, double bread, double o, double t);
void				render_surrender(t_data *data);
void				free_all(t_data *data);
double				ft_todd(const char *str);
int					parse_args(int argc, char **argv, t_data *data);
double				map_x_to_almond(int x, t_data *data);
double				map_y_to_bread(int y, t_data *data);
int					is_valid_str(char *str);
#endif