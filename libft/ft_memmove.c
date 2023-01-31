/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:30:48 by sansegur          #+#    #+#             */
/*   Updated: 2023/01/31 17:23:45 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//1. Verifiqua si *dest == *src, si es verdadero, devuelve el *dest.
// 2. Comprueba si el valor de n es 0, si es verdadero, devuelve el *dest.
// 3. Comprueba si *dest < *src, si es verdadero.
//		copia los bytes de *src  a *dest en orden.
// 4. Verifiqua si *dest  > *src, si es verdadero.
//		copia los bytes del *src al *dest en orden inverso.
// 5. Retorna *dest.
#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	size_t	i;
	char	*dst;
	char	*src;

	i = 0;
	dst = (char *)d;
	src = (char *)s;
	if (dst == src || !n)
		return (dst);
	if (dst < src)
	{
		while (i < n)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			dst[n - 1] = src[n - 1];
			n--;
		}
	}
	return (dst);
}
/*
int	main(void)
{
	printf("%s\n", ft_memmove("casas", "coche", 5));
	return (0);
}
*/
