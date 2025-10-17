/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbauer <mbauer@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 12:09:22 by mbauer            #+#    #+#             */
/*   Updated: 2025/07/11 14:52:17 by mbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_substr_recursiv(const char *src, char *dst, size_t len)
{
	if (len == 0 || *src == '\0')
	{
		*dst = '\0';
		return ;
	}
	*dst = *src;
	ft_substr_recursiv(src + 1, dst + 1, len - 1);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_substr_recursiv(s + start, substr, len);
	return (substr);
}
