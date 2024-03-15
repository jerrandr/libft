/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrandr <jerrandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:04:37 by jerrandr          #+#    #+#             */
/*   Updated: 2024/03/13 08:36:27 by jerrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		i;
	int		n;

	i = 0;
	n = 0;
	tmp = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (tmp == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		tmp[i] = s1[i];
		i++;
	}
	while (s2[n] != '\0')
	{
		tmp[i] = s2[n];
		i++;
		n++;
	}
	tmp[i] = '\0';
	return (tmp);
}
/*#include <stdio.h>
int	main()
{
	printf("%s",ft_strjoin("bonjour ", "42"));
}*/
