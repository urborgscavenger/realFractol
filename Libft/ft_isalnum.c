/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:35:11 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/11 12:00:51 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char test_chars[] = {'A', 'z', 1, '!', 'b', 'Z', 'a', '0', '\0'};
// 	int i = 0;

// 	while (test_chars[i] != '\0')
// 	{
// 		if (ft_isalnum(test_chars[i]))
// 			printf("'%c' is an alphanumeric character. %d\n", test_chars[i],
//				ft_isalnum(test_chars[i]));
// 		else
// 			printf("'%c' is not an alphanumeric character. %d\n", test_chars[i],
//				ft_isalnum(test_chars[i]));
// 		if (isalnum(test_chars[i]))
// 			printf("'%c' is an alphanumeric character original. %d\n",
//				test_chars[i], isalnum(test_chars[i]));
// 		else
// 			printf("'%c' is not an alphanumeric character original %d.\n",
//				test_chars[i], isalnum(test_chars[i]));
// 		i++;
// 	}
// 	return (0);
// }