/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:46:06 by sansegur          #+#    #+#             */
/*   Updated: 2023/05/19 11:44:38 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1);
	while ((i != j) && ft_strchr(set, s1[i]))
		i++;
	while ((i != j) && ft_strrchr(set, s1[j - 1]))
		j--;
	s2 = (char *) malloc(j - i + 1);
	if (!s2)
		return (0);
	*s2 = '\0';
	if (i < j)
		ft_strlcpy(s2, s1 + i, j - i + 1);
	return (s2);
}
