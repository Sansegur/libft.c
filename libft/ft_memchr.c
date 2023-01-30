/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:34:49 by sansegur          #+#    #+#             */
/*   Updated: 2023/01/23 16:51:34 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return (((unsigned char *)str) + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	printf("%s\n", (unsigned char *)ft_memchr("Barcelona", 'a', 4));
	printf("%s\n", (unsigned char *)ft_memchr("Barcelona", 'n', 8));
	printf("%s\n", (unsigned char *)ft_memchr("Barcelona", 'p', 8));
	return (0);
}
*/
