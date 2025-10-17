/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:40:44 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/14 17:14:27 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void my_func(unsigned int index, char *c)
// {
// 	*c = *c + index; // Increment character by its index
// }

// // Example usage of ft_striteri
// int	main(void)
// {
// 	char str[] = "hello";
// 	void (*func)(unsigned int, char*);

// 	// Define a function to modify each character

// 	func = &my_func;
// 	ft_striteri(str, func);
// 	printf("Modified string: %s\n", str); // Output should be "hfnos"
// 	return 0;
// }