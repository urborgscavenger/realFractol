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

static int ft_strcmp(const char *s1, const char *s2)
{
    if (s1 == NULL && s2 == NULL)
        return -2;
    if (s1 == NULL)
        return -1;
    if (s2 == NULL)
        return 1;

    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }

    return (unsigned char)*s1 - (unsigned char)*s2;
}

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
	else if ((!ft_strcmp(argv[1], "Mandelbrot")
		|| !ft_strcmp(argv[1], "mandelbrot"))
		&& argc == 2)
		data->fractal_type = almondbread;
	else if ((!ft_strcmp(argv[1], "Julia")
		|| !ft_strcmp(argv[1], "julia")) 
		&& argc == 4 && is_valid_str(argv[2]) 
		&& is_valid_str(argv[3]))
	{
		data->fractal_type = juliet;
		data->args = argv;
	}
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
