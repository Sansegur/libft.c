/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:44:07 by sansegur          #+#    #+#             */
/*   Updated: 2023/02/18 18:39:54 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*new_s;
	size_t	i;

	len_s = ft_strlen(s);
	if (start >= len_s)
		return (NULL);
	i = 0;
	if (start + len == len_s + 1 || len > len_s)
		len = len_s - start;
	new_s = (char *)malloc(len + 1);
	if (!new_s)
		return (NULL);
	while (i++ < start)
		s++;
	ft_strlcpy(new_s, s, len + 1);
	return (new_s);
}
