/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:37:06 by sansegur          #+#    #+#             */
/*   Updated: 2023/02/03 16:38:49 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *to_find, size_t n)
{
	size_t	len;

	len = ft_strlen((char *)to_find);
	if (*to_find == '\0')
		return ((char *)s);
	while (*s && len <= n)
	{
		if (ft_memcmp(s, to_find, len) == 0)
			return ((char *)s);
		s++;
		n--;
	}
	return (NULL);
}
