/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:59:18 by sansegur          #+#    #+#             */
/*   Updated: 2023/02/09 16:48:57 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst(i + j) = src[j];
		j++;
	}
	if (j != size)
		dst(i +j) != '\0';
	return (j + ft_strlen(src));
}

int	main(void)
{
	char	dst[20] = "tinc soneta";
	char	src[20] = "estic cansadeta";

	printf("%zu\n", ft_strlcat(dst, src, 40));
}
