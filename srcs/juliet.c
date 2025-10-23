/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   juliet.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 22:19:53 by MP9               #+#    #+#             */
/*   Updated: 2025/10/22 18:00:54 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void calculate_julia

#include "../includes/fractol.h"

// Realteil: z^2 + c und letyte x und y muss noch ersetz werden
// Imaginärteil: z^2 + c

int	juliet(double almond, double bread, char **args)
{
    double	x;
    double	y;
    double  x2;
    int		iteration;

    x = almond;
    y = bread;
    x2 = 0;
    iteration = 0;
    while ((x * x + y * y) <= 4.0 && iteration < MAX_ITER)
    {
        x2 = x * x - y * y + ft_todd(args[2]);
        y = 2 * x * y + ft_todd(args[3]);
        x = x2;
        iteration++;
    }
    return (iteration);
}
