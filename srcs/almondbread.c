/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   almondbread.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 22:09:49 by mbauer            #+#    #+#             */
/*   Updated: 2025/10/20 19:40:41 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int	almondbread(double almond, double bread)
{
	double	x;
	double	y;
	double x2;
	int		iteration;

	x = 0.0;
	y = 0.0;
	x2 = 0;
	iteration = 0;
	while (pow(x, x) + pow(y, y) <= 4.0 && iteration < MAX_ITER)
	{
		x2 = x * x - y * y + almond; // Realteil: Re(z^2) + a
		y = 2 * x * y + bread;                // Imaginärteil: Im(z^2) + b
		x = x2;
		iteration++;
	}
	return (iteration);
}
