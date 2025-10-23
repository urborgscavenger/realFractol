/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   almondbread.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 22:09:49 by mbauer            #+#    #+#             */
/*   Updated: 2025/10/22 18:30:45 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

 // Realteil: z^2 + c
 // Imaginärteil: z^2 + c

int	almondbread(double almond, double bread, char **data)
{
    double	x;
    double	y;
    double  x2;
    int		iteration;

    (void)data;
    x = 0.0;
    y = 0.0;
    x2 = 0;
    iteration = 0;
    while ((x * x + y * y) <= 4.0 && iteration < MAX_ITER)
    {
        x2 = x * x - y * y + almond;
        y = 2 * x * y + bread;
        x = x2;
        iteration++;
    }
    return (iteration);
}
