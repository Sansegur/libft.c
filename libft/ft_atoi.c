/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:29:18 by sansegur          #+#    #+#             */
/*   Updated: 2023/02/11 19:17:25 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		res = res * 10 + *str -48;
		str++;
	}
	return (res * sign);
}
/*
int	main(int ac, char **av)
{
	int nuestro;
	int man;

	if (ac == 2)
	{
		nuestro = ft_atoi(av[1]);
		man = atoi(av[1]);
		printf("nuestro: %d\n man: %d\n", nuestro, man);
	}
	return (0);
}

int	main(void)
{
	printf("%i\n", ft_atoi("d 2htwuuq	"));
	printf("%i\n", ft_atoi("125600"));
	printf("%i\n", ft_atoi("-2147483648"));
	return (0);
}
*/
