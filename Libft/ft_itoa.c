/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:04:44 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/11 14:35:41 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_number_length(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	convert_to_string(char *result, int n, int len, int sign)
{
	result[len] = '\0';
	if (n == 0)
		result[0] = '0';
	while (n)
	{
		result[--len] = '0' + sign * (n % 10);
		n /= 10;
	}
	if (sign < 0)
		result[0] = '-';
}

// Main ft_itoa function
char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	int		sign;

	if (n < 0)
		sign = -1;
	else
		sign = 1;
	len = get_number_length(n);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	convert_to_string(result, n, len, sign);
	return (result);
}

// int	main(void)
// {
// 	int number = -12345;
// 	char *str;

// 	str = ft_itoa(number);
// 	if (str)
// 	{
// 		printf("The integer %d as a string is: %s\n", number, str);
// 		free(str); // Don't forget to free the allocated memory
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}
// 	return (0);
// }
