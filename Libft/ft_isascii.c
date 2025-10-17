/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:39:49 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/11 12:03:31 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char test_chars[] = {'A', 'z', -21, '!', 'b', 'Z', 'a', '0', '\0'};
// 	int i = 0;

// 	while (test_chars[i] != '\0')
// 	{
// 		if (ft_isascii(test_chars[i]))
// 			printf("'%c' is an ASCII character. %d\n", test_chars[i],
// 				ft_isascii(test_chars[i]));
// 		else
// 			printf("'%c' is not an ASCII character. %d\n", test_chars[i],
// 				ft_isascii(test_chars[i]));
// 		if (isascii(test_chars[i]))
// 			printf("'%c' is an ASCII character original. %d\n", test_chars[i],
// 				isascii(test_chars[i]));
// 		else
// 			printf("'%c' is not an ASCII character original %d.\n",
// 				test_chars[i], isascii(test_chars[i]));
// 		i++;
// 	}
// 	return (0);
// }