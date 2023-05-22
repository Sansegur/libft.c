/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 11:50:06 by sansegur          #+#    #+#             */
/*   Updated: 2023/05/22 13:13:27 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_nmb_wrd(char const *s, char c)
{
	int	i;
	int	nword;

	i = 0;
	nword = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			nword++;
		while (s[i] != c && s[i])
			i++;
	}
	return (nword);
}

static int	ft_len_wrd(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**ft_free(char const **s, int i)
{
	while (i >= 0)
	{
		free (s[i]);
		i--;
	}
	free (s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ssplt;
	int		i;
	int		j;
	int		w;

	w = ft_nmb_wrd(s, c);
	i = 0;
	j = 0;
	ssplt = (char **)malloc(sizeof(char *) * (w + 1));
	if (!ssplt)
		return (NULL);
	while (i < w)
	{
		while (s[j] == c)
			j++;
		ssplt[i] = ft_substr(s, j, ft_len_wrd(&s[j], c));
		if (!ssplt[i])
			return (ft_free(s, i));
		j = j + ft_len_wrd(&s[j], c);
		i++;
	}
	ssplt[i] = NULL;
	return (ssplt);
}
