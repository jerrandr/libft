/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrandr <jerrandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 14:23:28 by jerrandr          #+#    #+#             */
/*   Updated: 2024/03/13 08:36:17 by jerrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

int	ft_comp(char const *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (ft_comp(set, s1[i]))
		i++;
	while (ft_comp(set, s1[j]))
		j--;
	str = ft_substr(s1, i, (j - i + 1));
	return (str);
}
// int main(int argc, char **argv)
// {
//     const char *str = argv[1];
//     const char *set = argv[2];
//     printf("[%s]",ft_strtrim(str, set));
// }
