/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:58:51 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/11 12:02:28 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// void	ft_ultimate_unit_test(void)
// {
// 	char test_chars[] = {'A', 'z', '1', '!', 'b', 'Z', 'a', '0'};
// 	int i = 0;
// 	while (test_chars[i] != '\0')
// 	{
// 		if (ft_isalpha(test_chars[i]))
// 			printf("'%c' is an alphabetic character. %d\n", test_chars[i],
// 				ft_isalpha(test_chars[i]));
// 		else
// 			printf("'%c' is not an alphabetic character. %d\n", test_chars[i],
// 				ft_isalpha(test_chars[i]));

// 		if (isalpha(test_chars[i]))
// 			printf("'%c' is an alphabetic character original. %d\n",
// 				test_chars[i], isalpha(test_chars[i]));
// 		else
// 			printf("'%c' is not an alphabetic character original %d.\n",
// 				test_chars[i], isalpha(test_chars[i]));
// 		i++;
// 	}
// }

// int	main(void)
// {
// 	ft_ultimate_unit_test();
// 	return (0);
// }