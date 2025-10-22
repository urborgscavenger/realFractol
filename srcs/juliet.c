/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   juliet.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 22:19:53 by MP9               #+#    #+#             */
/*   Updated: 2025/10/22 16:55:56 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void calculate_julia

#include "../includes/fractol.h"

int	juliet(double almond, double bread)
{
    double	x;
    double	y;
    double  x2;
    int		iteration;

    x = 0.0;
    y = 0.0;
    x2 = 0;
    iteration = 0;
    while ((x * x + y * y) <= 4.0 && iteration < MAX_ITER)
    {
        x2 = x * x - y * y + almond;    // Realteil: z^2 + c
        y = 2 * x * y + bread;          // Imaginärteil: z^2 + c
        x = x2;
        iteration++;
    }
    return (iteration);
}
