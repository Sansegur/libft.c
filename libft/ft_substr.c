/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:44:07 by sansegur          #+#    #+#             */
/*   Updated: 2023/02/21 16:44:19 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*new_str;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	i = 0;
	if (len > (s_len - start))
		len = s_len - start;
	if (start >= s_len)
	{
		new_str = (char *)malloc(1);
		if (new_str == NULL)
			return (NULL);
		new_str[0] = '\0';
		return (new_str);
	}
	new_str = (char *)malloc(len + 1);
	if (new_str == NULL)
		return (NULL);
	while (i++ < start)
		s++;
	ft_strlcpy(new_str, s, len +1);
	return (new_str);
}
