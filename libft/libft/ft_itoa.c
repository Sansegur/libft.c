/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:29:46 by sansegur          #+#    #+#             */
/*   Updated: 2023/03/30 16:46:52 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(long n)
{
	size_t	len;

	if (n < 0)
		len = 1;
	else
		len = 0;
	while (1)
	{
		n = n / 10;
		len++;
		if (n == 0)
			break ;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;
	size_t	len;
	long	valor;

	i = 0;
	valor = n;
	len = ft_len(valor);
	str = ((char *)malloc(len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (valor < 0)
	{
		str[0] = '-';
		valor = valor * -1;
		i++;
	}
	while (i < len)
	{
		str[len - 1] = (valor % 10) + 48;
		valor = valor / 10;
		len--;
	}
	return (str);
}
