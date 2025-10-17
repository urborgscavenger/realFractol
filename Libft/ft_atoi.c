/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:50:59 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/10 16:32:47 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

// int	main(void)
// {
// 	const char *str1 = "   -12345";
// 	const char *str2 = "42";
// 	const char *str3 = "   +6789abc";

// 	printf("Converted '%s' to %d\n", str1, ft_atoi(str1));
// 	printf("Converted '%s' to %d\n", str2, ft_atoi(str2));
// 	printf("Converted '%s' to %d\n", str3, ft_atoi(str3));

// 	return 0;
// }