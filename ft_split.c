/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrandr <jerrandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 12:44:14 by jerrandr          #+#    #+#             */
/*   Updated: 2024/03/14 10:02:53 by jerrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cnt_word(const char *str, char c)
{
	int	i;
	int	n;
	int	tmp;

	n = 0;
	i = 0;
	tmp = 0;
	while (str[i] != '\0')
	{
		if ((str[i] != c) && (tmp == 0))
		{
			tmp = 1;
			n++;
		}
		if ((str[i] == c) && (tmp == 1))
		{
			tmp = 0;
		}
		i++;
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	char		**tmp;
	int			ts;
	size_t		i;
	size_t		j;

	j = 0;
	i = 0;
	ts = -1;
	tmp = (char **)ft_calloc((cnt_word(s, c) + 1), sizeof(char *));
	if (!tmp || !s)
		return (NULL);
	while (i <= ft_strlen((char *)s))
	{
		if (s[i] != c && ts < 0)
			ts = i;
		else if ((s[i] == c || i == ft_strlen((char *)s)) && ts >= 0)
		{
			tmp[j] = ft_substr(s, ts, (i - ts));
			j++;
			ts = -1;
		}
		i++;
	}
	return (tmp);
}
//  int	main(int argc, char **argv)
//  {
// 	if (argc == 2)
// 	{
// 		int	i;
//  		//char **zoky;
//  		i = 0;
// 		printf("cnt_word: %d\n", cnt_word(argv[1], 'i'));
// 		while (i < cnt_word(argv[1], 'i'))
//  		{
//  			printf("[%s]",ft_split(argv[1], 'i')[i]);
//  			printf("\n");
//  			i++;
//  		}
// 	}
//  }
