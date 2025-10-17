/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 12:50:36 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/11 12:58:56 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	// char test_cha[] = {'0', '5', '9', 'a', '!', '3', '7', 'Z', '\0'};
// 	int test_chars[] = {0, 5, 9, 'a', '!', 3, 7, 'Z', '\0'};
// 	// char test_chars[] = {'\t', '5', '9', 'a', '!', 3, '7', 'Z', '\0'};
// 	int i = 0;

// 	while (i < 9)
// 	{
// 		if (ft_isdigit(test_chars[i]))
// 			printf("'%c' is a digit. %d\n", test_chars[i],
// 				ft_isdigit(test_chars[i]));
// 		else
// 			printf("'%c' is not a digit. %d\n", test_chars[i],
// 				ft_isdigit(test_chars[i]));
// 		if (isdigit(test_chars[i]))
// 			printf("'%c' is a digit original. %d\n",
// 				test_chars[i], isalpha(test_chars[i]));
// 		else
// 			printf("'%c' is not a digit original %d.\n",
// 				test_chars[i], isalpha(test_chars[i]));
// 		i++;
// 		i++;
// 	}
// 	return (0);
// }