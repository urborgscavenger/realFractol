/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   todd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:22:36 by mbauer            #+#    #+#             */
/*   Updated: 2025/10/23 21:39:46 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

static int	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r');
}

static int	is_valid_char(char c)
{
	return (ft_isdigit(c) || c == '.' || c == '-' || c == '+');
}

static double	handle_decimals(const char *str, int *i)
{
	double	result;
	double	decimal;

	result = 0.0;
	decimal = 0.1;
	(*i)++;
	while (ft_isdigit(str[*i]))
	{
		result += (str[*i] - '0') * decimal;
		decimal *= 0.1;
		(*i)++;
	}
	return (result);
}

int	is_valid_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_valid_char(str[i]))
			return (0);
		i++;
	}
	return (1);
}

double	ft_todd(const char *str)
{
	double	result;
	int		sign;
	int		i;

	result = 0.0;
	sign = 1;
	i = 0;
	while (is_space(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
		result = result * 10.0 + (str[i++] - '0');
	if (str[i] == '.')
		result += handle_decimals(str, &i);
	if (str[i] && !is_valid_char(str[i]))
		return (0.0);
	return (result * sign);
}
