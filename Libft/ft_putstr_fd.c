/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:01:04 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/11 12:09:04 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(const char *s, int fd)
{
	if (s == NULL)
		return ;
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}

// int	main(void)
// {
// 	const char *str = "Hello, World!";
// 	int fd = 1; // Standard output

// 	ft_putstr_fd(str, fd);
// 	return 0;
// }