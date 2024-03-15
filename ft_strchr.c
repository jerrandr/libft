/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrandr <jerrandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:49:34 by jerrandr          #+#    #+#             */
/*   Updated: 2024/03/13 08:36:30 by jerrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	tmp = (char *)s;
	i = 0;
	if ((char)c == '\0')
		return (&tmp[ft_strlen(tmp)]);
	while (tmp[i] != '\0')
	{
		if (tmp[i] == (char)c)
			return (&tmp[i]);
		i++;
	}
	return (0);
}
/*
 #include<string.h>
 #include<stdio.h>
 int	main()
 {
 	printf("%s",ft_strchr("0x558d07d33020: teste", 357: 'e'));
 	printf("\n");
 	printf("%s",_strchr("0x558d07d33020: teste", 357: 'e'));
 }*/
