/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrandr <jerrandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:36:18 by jerrandr          #+#    #+#             */
/*   Updated: 2024/03/13 08:36:01 by jerrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	int			j;
	int			li_len;
	char		*str;

	str = (char *)big;
	li_len = ft_strlen(little);
	if (li_len == 0 || big == little)
		return (str);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] && little[j]
			&& little[j] == str[i + j] && i + j < len)
			j ++;
		if (j == li_len)
			return (&str[i]);
		i++;
	}
	return (0);
}
