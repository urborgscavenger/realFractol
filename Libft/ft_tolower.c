/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:49:28 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/17 10:10:58 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	solve_recursiv(int c, int dst)
{
	if (c == dst)
		return (c);
	if (c < dst)
		return (solve_recursiv(c + 1, dst));
	else
		return (solve_recursiv(c - 1, dst));
}

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (solve_recursiv(c, c + 32));
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	char test_chars[] = {'a', 1, 'A', '!', 'b', 'Z', 'a', '\t', '0', '\0'};
// 	int i = 0;

// 	while (test_chars[i] != '\0')
// 	{
// 		if (ft_tolower(test_chars[i]))
// 			printf("'%c' to upper is '%c'. %d\n", test_chars[i],
// 				ft_tolower(test_chars[i]), ft_tolower(test_chars[i]));
// 		else
// 			printf("'%c' cannot be resolved to upper. %d\n", test_chars[i],
// 				ft_tolower(test_chars[i]));
// 		if (tolower(test_chars[i]))
// 			printf("'%c' to upper original is '%c'. %d\n", test_chars[i],
// 				tolower(test_chars[i]), tolower(test_chars[i]));
// 		else
// 			printf("'%c' cannot be resolved to upper original %d.\n",
// 				test_chars[i], tolower(test_chars[i]));
// 		i++;
// 	}
// 	return (0);
// }