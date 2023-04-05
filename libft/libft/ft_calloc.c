/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:02:32 by sansegur          #+#    #+#             */
/*   Updated: 2023/04/04 12:02:43 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nobj, size_t size)
{
	char	*s1;

	s1 = (char *)malloc(nobj * size);
	if (s1 == NULL)
		return (NULL);
	ft_bzero(s1, nobj * size);
	return (s1);
}
