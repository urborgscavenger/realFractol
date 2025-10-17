/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:07:51 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/11 12:08:59 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}

// int	main(void)
// {
// 	int fd = 1; // Standard output
// 	ft_putnbr_fd(12345, fd);
// 	ft_putchar_fd('\n', fd);
// 	ft_putnbr_fd(-67890, fd);
// 	ft_putchar_fd('\n', fd);
// 	ft_putnbr_fd(INT_MIN, fd);
// 	ft_putchar_fd('\n', fd);
// 	return 0;
// }