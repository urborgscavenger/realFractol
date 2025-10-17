/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:42:18 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/11 12:03:59 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char test_chars[] = {'A', 'z', -3, '!', 'b', 'Z', 'a', '\t', '\0'};
// 	int i = 0;

// 	while (test_chars[i])
// 	{
// 		if (ft_isprint(test_chars[i]))
// 			printf("'%c' is a printable character. %d\n", test_chars[i],
// 				ft_isprint(test_chars[i]));
// 		else
// 			printf("'%c' is not a printable character. %d\n", test_chars[i],
// 				ft_isprint(test_chars[i]));
// 		if (isprint(test_chars[i]))
// 			printf("'%c' is a printable character original. %d\n",
// 				test_chars[i], isprint(test_chars[i]));
// 		else
// 			printf("'%c' is not a printable character original %d.\n",
// 				test_chars[i], isprint(test_chars[i]));
// 		i++;
// 	}
// 	return (0);
// }