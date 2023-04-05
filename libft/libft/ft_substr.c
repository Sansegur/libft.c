/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:44:07 by sansegur          #+#    #+#             */
/*   Updated: 2023/04/05 13:46:59 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new_s;
	unsigned int	i;
	unsigned int	n;

	n = strlen(s);
	if (n == 0 || len == 0 || start > n)
		return (ft_strdup(""));
	else if (len > n - start)
		new_s = malloc(sizeof(char) * (n - start + 1));
	else
		new_s = malloc(sizeof(char) * (len + 1));
	if (!s || !new_s)
		return (NULL);
	i = 0;
	while (s[start] && start <= n && i < len)
		new_s[i++] = s[start++];
	new_s[i] = '\0';
	return (new_s);
}
